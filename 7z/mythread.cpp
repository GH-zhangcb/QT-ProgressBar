#include "mythread.h"
#include <QDebug>
#include "CompExtrAPI.h"
mythread::mythread()
{
	//
}

void mythread::run()
{
	if (_flag == "C")
	{
		CompressExtract compress;
		compress.CompressFile(_archivename, _filename, _DLLName);
	}
	else if (_flag == "E")
	{
		CompressExtract extract;
		extract.ExtractFile(_archivename, _filename, _DLLName);
	}
}
void mythread::display(wstring archivename,wstring filename, wstring DLLName)
{
	_archivename = archivename;
	_filename = filename;
	_DLLName = DLLName;
}

void mythread::showflag(QString flag)
{
	_flag = flag;
}
