/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Aug 21 20:08:10 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuOne;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        action3 = new QAction(MainWindow);
        action3->setObjectName(QString::fromUtf8("action3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuOne = new QMenu(menuBar);
        menuOne->setObjectName(QString::fromUtf8("menuOne"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOne->menuAction());
        menuOne->addAction(action1);
        menuOne->addAction(action2);
        menuOne->addAction(action3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        action2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        action3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        menuOne->setTitle(QApplication::translate("MainWindow", "one", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
