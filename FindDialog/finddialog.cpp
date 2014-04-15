#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include "finddialog.h"


FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    label=new QLabel(tr("Find &What"));
    lineEdit = new QLineEdit;
    label->setBuddy(lineEdit);

    caseCheckBox = new QCheckBox(tr("Match &Case"));
    backwardCheckBox=new QCheckBox(tr("Search &backford"));

    connect(lineEdit,SIGNAL(textChanged(const QString&)),this,SLOT(enableFindButton(const QString&)));
    findButton=new QPushButton(tr("&Find"));
    findButton->setDefault(true);
    findButton->setEnabled(false);
    connect(findButton,SIGNAL(clicked()),this,SLOT(findClicked()));
    closeButton=new QPushButton(tr("&Close"));
    connect(closeButton,SIGNAL(clicked()),this,SLOT(close()));

    QHBoxLayout* topleftlayout=new QHBoxLayout;
    topleftlayout->addWidget(label);
    topleftlayout->addWidget(lineEdit);

    QVBoxLayout *leftlayout=new QVBoxLayout;
    leftlayout->addLayout(topleftlayout);
    leftlayout->addWidget(caseCheckBox);
    leftlayout->addWidget(backwardCheckBox);

    QVBoxLayout *rightlayout=new QVBoxLayout;
    rightlayout->addWidget(findButton);
    rightlayout->addWidget(closeButton);
    rightlayout->addStretch();

    QHBoxLayout *mainlayout=new QHBoxLayout;
    mainlayout->addLayout(leftlayout);
    mainlayout->addLayout(rightlayout);

    this->setLayout(mainlayout);
    this->setWindowTitle(tr("find"));
    this->setFixedHeight(this->sizeHint().height());
}

FindDialog::~FindDialog()
{
    
}
void FindDialog::findClicked()
{
    QString text=lineEdit->text();
    Qt::CaseSensitivity cs = caseCheckBox->isChecked()?Qt::CaseInsensitive:Qt::CaseSensitive;
    if(backwardCheckBox->isChecked())
    {
        emit findPrevious(text,cs);
    }
    else
    {
        emit findNext(text,cs);
    }
}
void FindDialog::enableFindButton(const QString &text){
    findButton->setEnabled(!text.isEmpty());
}
