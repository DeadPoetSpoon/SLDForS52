#ifndef READER_H
#define READER_H
#include <QXmlStreamReader>
#include <QDebug>
#define mout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
class Reader
{
public:
    Reader(QIODevice *device);
    ~Reader();
private:
    QXmlStreamReader* xmlReader = nullptr;
};

#endif // READER_H
