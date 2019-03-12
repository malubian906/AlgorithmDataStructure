#include "AlgorithmDataStructure.h"
#include "MyDataStructure.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])                
{
    // 好难用啊，我擦擦擦 ，疯了
	int *array = new int[5]{ 0,1,2,3,4 };
	try
	{
		ChangeLength1D<int>(array,5,4);
	}
	catch (QString state)
	{
		qDebug() << state;
	}
	return 0;
}
