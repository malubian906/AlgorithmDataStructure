#pragma once
#include <QDebug>
#include <QString>
#include <QtWidgets/QMainWindow>
#include "ui_AlgorithmDataStructure.h"

class AlgorithmDataStructure : public QMainWindow
{
	Q_OBJECT

public:
	AlgorithmDataStructure(QWidget *parent = Q_NULLPTR);

private:
	Ui::AlgorithmDataStructureClass ui;
};
//  �ַ�����ƥ�����
int Index(QString,QString,int);