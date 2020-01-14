#ifndef READER_H
#define READER_H
#define mout qDebug()<<"["<<__FILE__<<":"<<__LINE__<<"]"
#include <QXmlStreamReader>
#include <QDebug>
#include "Sld/styledlayerdescriptor.h"
class Reader
{
public:
    Reader(QIODevice *device);
    ~Reader();

private:
    QXmlStreamReader* xmlReader = nullptr;
    StyledLayerDescriptor* sld = nullptr;
};

#endif // READER_H
