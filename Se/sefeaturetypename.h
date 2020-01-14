#ifndef SEFEATURETYPENAME_H
#define SEFEATURETYPENAME_H
#include "Xml/element.h"

class SeFeatureTypeName:public Element
{
public:
    SeFeatureTypeName();
private:
    //本为QName类型，这里简化
    QString _namespaceURI;
    QString _localPart;
    QString _prefix;
};

#endif // SEFEATURETYPENAME_H
