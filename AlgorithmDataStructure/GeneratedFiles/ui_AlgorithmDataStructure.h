/********************************************************************************
** Form generated from reading UI file 'AlgorithmDataStructure.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGORITHMDATASTRUCTURE_H
#define UI_ALGORITHMDATASTRUCTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlgorithmDataStructureClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AlgorithmDataStructureClass)
    {
        if (AlgorithmDataStructureClass->objectName().isEmpty())
            AlgorithmDataStructureClass->setObjectName(QStringLiteral("AlgorithmDataStructureClass"));
        AlgorithmDataStructureClass->resize(600, 400);
        menuBar = new QMenuBar(AlgorithmDataStructureClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AlgorithmDataStructureClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AlgorithmDataStructureClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AlgorithmDataStructureClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AlgorithmDataStructureClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AlgorithmDataStructureClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AlgorithmDataStructureClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AlgorithmDataStructureClass->setStatusBar(statusBar);

        retranslateUi(AlgorithmDataStructureClass);

        QMetaObject::connectSlotsByName(AlgorithmDataStructureClass);
    } // setupUi

    void retranslateUi(QMainWindow *AlgorithmDataStructureClass)
    {
        AlgorithmDataStructureClass->setWindowTitle(QApplication::translate("AlgorithmDataStructureClass", "AlgorithmDataStructure", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlgorithmDataStructureClass: public Ui_AlgorithmDataStructureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORITHMDATASTRUCTURE_H
