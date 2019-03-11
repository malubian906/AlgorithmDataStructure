#include "AlgorithmDataStructure.h"
#include "MyDataStructure.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	MyClass *p = nullptr;
	p->func_1();
	p->func_2();


	QApplication a(argc, argv);
	AlgorithmDataStructure w;
	w.show();
	//
	return a.exec();
}
