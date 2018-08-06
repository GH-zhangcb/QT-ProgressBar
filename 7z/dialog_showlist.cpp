#include "dialog_showlist.h"
#include "ui_dialog_showlist.h"
#include "CompExtrAPI.h"
#include <qDebug>
Dialog_showlist::Dialog_showlist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_showlist)
{
    ui->setupUi(this);
    ui->showlist_label->setText(tr("文件路径"));
    ui->show_pushButton->setText(tr("显示"));
}

Dialog_showlist::~Dialog_showlist()
{
    delete ui;
}

void Dialog_showlist::on_show_pushButton_clicked()
{
    map<wstring,int>filelist;
    CompressExtract showlist;
    const wstring DllName=L".\\7z.dll";
    const wstring archivename=ui->show_lineEdit->text().toStdWString();
    showlist.ShowArchivefileList(archivename,filelist,DllName);
    auto filelist_iter=filelist.begin();
    while(filelist_iter!=filelist.end())
    {
       QString temp_filename=QString::fromStdWString(filelist_iter->first);
        ui->showlist_textBrowser->append(temp_filename);
        filelist_iter++;
    }
}
