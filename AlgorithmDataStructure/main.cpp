#include "AlgorithmDataStructure.h"
#include "MyDataStructure.h"
#include <QtWidgets/QApplication>
union MyUnion
{
	int a;
	double b;
};



int main(int argc, char *argv[])                
{
	int *array = new int[5]{ 0,1,2,3,4 };
	try
	{
		ChangeLength1D<int>(array,5,4);
	}
	catch (QString state)
	{
		qDebug() << state;
	}

	QString str_1 = "goodgoogle";
	QString str_2 = "google";
	Index(str_1,str_2,3);
	return 0;
}
