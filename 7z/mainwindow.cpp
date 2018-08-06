#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CompExtrAPI.h"
#include "dialog_showlist.h"
#include <QProgressBar>
#include <QProgressDialog>
#include <QDebug>
#include "threadgetsize.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Comp_pushButton->setText(tr("压缩"));
    ui->Extract_pushButton->setText(tr("解压"));
    ui->ShowList_pushButton->setText(tr("显示压缩文件"));
    ui->In_label->setText(tr("打包文件"));
    ui->out_label->setText(tr("压缩/解压路径"));
    thread1=new ThreadGetSize();
	connect(thread1, SIGNAL(ReturnResult(const int, const int)), this, SLOT(displayResult(const int,const int)));
    thread2=new mythread();
    connect(this,SIGNAL(returndata(wstring,wstring,wstring)),thread2,SLOT(display(wstring,wstring,wstring)));
	_flag = "";
	connect(this,SIGNAL(returnflag(QString)),thread1,SLOT(showflag(QString)));
	connect(this, SIGNAL(returnflag(QString)), thread2, SLOT(showflag(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayResult(const int total,const int compsize )
{
	    ui->progressBar->setValue(0);
	    ui->progressBar->setRange(0, total);
		ui->progressBar->setValue(compsize);	
}

void MainWindow::on_Comp_pushButton_clicked()
{
	_flag = "C";
	emit returnflag(_flag);
	thread1->start();//返回数据
	thread2->start();//调用压缩
	_DllName = L".\\7z.dll";
	_archivename = ui->in_lineEdit->text().toStdWString();
	_filename = ui->out_lineEdit->text().toStdWString();
   emit returndata(_archivename, _filename, _DllName); 
}

void MainWindow::on_Extract_pushButton_clicked()
{
	_flag = "E";
	emit returnflag(_flag);
	thread1->start();//返回数据
	thread2->start();//调用压缩
	_DllName = L".\\7z.dll";
	_archivename = ui->in_lineEdit->text().toStdWString();
	_filename = ui->out_lineEdit->text().toStdWString();
	emit returndata(_archivename, _filename, _DllName);
}

void MainWindow::on_ShowList_pushButton_clicked()
{
    Dialog_showlist dsl;
    dsl.setWindowTitle(tr("显示压缩文件"));
    dsl.exec();
}




