#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QKeySequence>
#include <QIcon>
#include <QMessageBox>
#include <QLabel>
#include <QStatusBar>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    openAction=new QAction(tr("&Open"),this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open a file."));
    openAction->setIcon(QIcon(":/0.ico"));
    connect(openAction,SIGNAL(triggered()),this,SLOT(open()));
    QMenu *file=menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    QToolBar *toolbar=addToolBar(tr("&File"));
    toolbar->addAction(openAction);

    label=new QLabel;
    label->setMinimumSize(label->sizeHint());
    label->setAlignment(Qt::AlignHCenter);
    statusBar()->addWidget(label);

}

void MainWindow::open()
{
    QMessageBox::information(NULL,tr("Open"),tr("Open a file"));
}

MainWindow::~MainWindow()
{
    
}

