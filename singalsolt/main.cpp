#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton * qpb=new QPushButton("Quit");
    QObject::connect(qpb,SIGNAL(clicked()),&a,SLOT(quit()));
    qpb->show();
    return a.exec();
}
