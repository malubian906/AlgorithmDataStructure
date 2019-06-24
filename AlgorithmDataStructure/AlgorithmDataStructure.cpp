#include "AlgorithmDataStructure.h"

AlgorithmDataStructure::AlgorithmDataStructure(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

int Index(QString str_S, QString str_T, int pos)
{
	int i = pos;
	int j = 0;


	while (i <= str_S.size()&&j <= str_T.size())
	{
		if (str_S[i] == str_T[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i -j +1;
			j = 0;
		}
	}

	if (j > str_T.size())
	{
		return i-str_T.size();
	}
	else
	{
		return 0;
	}
}