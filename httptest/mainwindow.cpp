#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
    QFile file("/home/rooted/Develop/github/VoiceAssist/hello.flac");
    //if (file.size())
    file.open(QIODevice::ReadOnly);
    QByteArray audio=file.readAll();
    cout<<"size="<<audio.size()<<endl;
    QNetworkRequest request;
    QString speechapi="http://www.google.com/speech-api/v1/recognize?xjerr=1&client=chromium&lang=zh-CN&maxresults=1";
    request.setUrl(speechapi);
    request.setRawHeader("User-Agent","Mozilla/5.0");
    request.setRawHeader("Content-Type","audio/x-flac;rate=16000");
    manager->post(request,audio); ///引发replyFinished方法的调用


    //manager->get(QNetworkRequest(QUrl("http://www.baidu.com")));
}


void MainWindow::replyFinished(QNetworkReply *reply)
{
    QTextCodec *codec = QTextCodec::codecForName("utf8");
    QString all = codec->toUnicode(reply->readAll());
    ui->textBrowser->setText(all);
    reply->deleteLater();
}

MainWindow::~MainWindow()
{
    delete ui;
}
