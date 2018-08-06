#include "threadgetsize.h"
#include "CompExtrAPI.h"
#include <QDebug>


ThreadGetSize::ThreadGetSize()
{
  //
}
void ThreadGetSize::showflag(QString flag)
{
	_flag = flag;
}

void ThreadGetSize::run()
{
	Sleep(100);
	
	if (_flag == "C")
	{
		CompressExtract compress;
		while (true)
		{
			compress.cGetFullandCompleteSize();
			emit ReturnResult(compress._cFullSize, compress._cCompleteSize);
			Sleep(200);
			if (compress._cFullSize == compress._cCompleteSize&&compress._cFullSize != 0)
				break;
		}
	}
	else if (_flag == "E")
	{
		CompressExtract extract;
		while (true)
		{
			extract.eGetFullandCompleteSize();
			emit ReturnResult(extract._eFullSize, extract._eCompleteSize);
			Sleep(200);
			if (extract._eFullSize == extract._eCompleteSize&&extract._eFullSize != 0)
				break;
		}
	}
}
