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
	//
	MyUnion tu;
	tu.a = 100;
	tu.b=1.3234;
	return 0;
}
