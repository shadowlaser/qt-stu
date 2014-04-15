#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QWidget>
#include <QSlider>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *qw=new QWidget();
    qw->setWindowTitle("set your age");

    QSpinBox *qsb=new QSpinBox();
    QSlider *qs=new QSlider(Qt::Horizontal);
    qsb->setRange(0,130);
    qs->setRange(0,130);
    QObject::connect(qsb,SIGNAL(valueChanged(int)),qs,SLOT(setValue(int)));
    QObject::connect(qs,SIGNAL(valueChanged(int)),qsb,SLOT(setValue(int)));
    
    QHBoxLayout *qhbl=new QHBoxLayout();
    qhbl->addWidget(qsb);
    qhbl->addWidget(qs);
    qw->setLayout(qhbl);

    qw->show();
    return a.exec();
}
