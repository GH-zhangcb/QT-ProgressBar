#ifndef THREADGETSIZE_H
#define THREADGETSIZE_H

#include <QThread>

#include <string>
using namespace std;
class ThreadGetSize:public QThread
{
	Q_OBJECT
public:
	ThreadGetSize();
	void run();
public slots:
void showflag(QString flag);
private:
	QString _flag;
signals:
    void ReturnResult(const int,const int);
	
};

#endif // THREADGETSIZE_H
