#include "mainwindow.h"
#include <QApplication>
#include "CompExtrAPI.h"
#include <QTextCodec>
#include <dialog_showlist.h>





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));

	MainWindow w;
    w.setWindowTitle(QWidget::tr("7zip"));
    w.show();
    return a.exec();
}
