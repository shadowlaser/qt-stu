#ifndef PROTOCOL_H
#define PROTOCOL_H

class Protocol
{
public:
    Protocol();
    void request_speech(QByteArray & audiodata);
    bool NT_SPEECH;
};

#endif // PROTOCOL_H
