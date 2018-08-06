#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "threadgetsize.h"
#include "mythread.h"
#include <string>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	
private slots:

    void on_Extract_pushButton_clicked();
    void on_ShowList_pushButton_clicked();
    void on_Comp_pushButton_clicked();
    void displayResult(const int,const int);
	
private:
    Ui::MainWindow *ui;
    ThreadGetSize *thread1;
    mythread *thread2;
	QString _flag;
	wstring _DllName;
	wstring _archivename;
	wstring _filename;
signals:
	void returndata(wstring wtr1,wstring wstr2,wstring wstr3);
	void returnflag(QString flag);
};

#endif // MAINWINDOW_H
