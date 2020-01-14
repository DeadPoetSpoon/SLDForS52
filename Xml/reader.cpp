#include "reader.h"

Reader::Reader(QIODevice *device)
{
    xmlReader = new QXmlStreamReader(device);
    while(!xmlReader->atEnd()){
        QXmlStreamReader::TokenType token = xmlReader->readNext();
        if(token == QXmlStreamReader::StartDocument){
            continue;
        }
        if(token == QXmlStreamReader::StartElement){
            mout<<"读取节点名";
            mout << xmlReader->name();
            mout<<"读取属性";
            QXmlStreamAttributes attributrs = xmlReader->attributes();
            foreach (QXmlStreamAttribute att, attributrs) {
                mout<<att.name()<<":"<<att.value();
            }
//            mout<<"读取节点信息";
//            mout<< xmlReader->readElementText();
        }else if(token == QXmlStreamReader::EndElement){
            mout<<"节点"<<xmlReader->name()<<"读取完毕";
        }

    }

}
Reader::~Reader()
{
    if(xmlReader!=nullptr)
        delete xmlReader;
}
