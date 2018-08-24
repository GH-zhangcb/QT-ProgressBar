#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CompExtrAPI.h"
#include "dialog_showlist.h"
#include <QProgressBar>
#include <QProgressDialog>
#include <QDebug>
#include "threadgetsize.h"
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Comp_pushButton->setText(tr("压缩"));
    ui->Extract_pushButton->setText(tr("解压"));
    ui->ShowList_pushButton->setText(tr("显示压缩文件"));
    ui->In_label->setText(tr("打包文件:"));
    ui->out_label->setText(tr("压缩/解压路径:"));
    thread1=new ThreadGetSize();
	connect(thread1, SIGNAL(ReturnResult(const int, const int)), this, SLOT(displayResult(const int,const int)));
    thread2=new mythread();
    connect(this,SIGNAL(returndata(wstring,wstring,wstring)),thread2,SLOT(display(wstring,wstring,wstring)));
	_flag = "";
	connect(this,SIGNAL(returnflag(QString)),thread1,SLOT(showflag(QString)));
	connect(this, SIGNAL(returnflag(QString)), thread2, SLOT(showflag(QString)));
    connect(ui->directory_Button_IN,SIGNAL(clicked()),this,SLOT(on_directory_Button_clicked_IN()));
    connect(ui->file_pushButton_IN,SIGNAL(clicked()),this,SLOT(on_file_pushButton_clicked_IN()));
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
	_archivename = ui->in_lineEdit->text().replace("/", "\\").toStdWString();
	_filename = ui->out_lineEdit->text().replace("/", "\\").toStdWString();
   emit returndata(_archivename, _filename, _DllName); 
}

void MainWindow::on_Extract_pushButton_clicked()
{
	_flag = "E";
	emit returnflag(_flag);
	thread1->start();//返回数据
	thread2->start();//调用压缩
	_DllName = L".\\7z.dll";
	_archivename = ui->in_lineEdit->text().replace("/","\\").toStdWString();
	_filename = ui->out_lineEdit->text().replace("/", "\\").toStdWString();
	emit returndata(_archivename, _filename, _DllName);
}

void MainWindow::on_ShowList_pushButton_clicked()
{
    Dialog_showlist dsl;
    dsl.setWindowTitle(tr("显示压缩文件"));
    dsl.exec();
}

void MainWindow::on_directory_Button_clicked()
{
     QString fileName = QFileDialog::getExistingDirectory(this,tr("FindFile"),".");
     fileName.replace("/","\\");
     ui->out_lineEdit->setText(fileName);
}

void MainWindow::on_file_pushButton_clicked()
{
    QString temp="";
    openFile(temp);
    ui->out_lineEdit->setText(temp);
}

void MainWindow::openFile(QString &temp)
{
    QStringList fileName = QFileDialog::getOpenFileNames(this,tr("FindFile"),".");
    for(int i=0;i<fileName.size();i++)
    {
        if(i==fileName.size()-1)
        {
            temp=temp+fileName[i];
        }
        else
        {
            temp=temp+fileName[i]+"|";
        }
    }
    temp.replace("/","\\");
}

void MainWindow::on_file_pushButton_clicked_IN()
{
    QString temp="";
    openFile(temp);
    ui->in_lineEdit->setText(temp);
}

void MainWindow::on_directory_Button_clicked_IN()
{
    QString fileName = QFileDialog::getExistingDirectory(this,tr("FindFile"),".");
    fileName.replace("/","\\");
    ui->in_lineEdit->setText(fileName);
}
