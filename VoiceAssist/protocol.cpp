#include "protocol.h"
#include <QNetworkRequest>
Protocol::Protocol()
{
    NT_SPEECH=false;
}

void Protocol::request_speech(QByteArray &audiodata)
{
    QNetworkRequest request;
    QString speechAPI="http://www.google.com/speech-api/v1/recognize?xjerr=1&client=chromium&lang=zh-CN&maxresults=1";
    request.setUrl(speechAPI);
    request.setRawHeader("User-Agent","Mozilla/5.0");
    request.setRawHeader("Content-Type","audio/x-flac;rate=16000");
    NT_SPEECH=NetworgMGR.post(request,audiodata);
    connect(NT_SPEECH,SIGNAL(readyRead()),this,SLOT(Read_SPEECH()));
            //connect(Nt_SPEECH, SIGNAL(readyRead()), this, SLOT(Read_SPEECH()));
}
