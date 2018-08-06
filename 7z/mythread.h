#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <string>
using namespace std;
class mythread:public QThread
{
    Q_OBJECT
public:
    mythread();
    void run();
private slots:
    void display(wstring,wstring,wstring);
	void showflag(QString);
private:
	wstring _archivename;
	wstring _filename;
	wstring _DLLName;
	QString _flag;
};

#endif // MYTHREAD_H
