#ifndef SEUOM_H
#define SEUOM_H
#include "Xml/attribute.h"
///
/// \brief The SeUom class
/// anyURI类型
///
class SeUom : public Attribute
{
public:
    SeUom();
    SeUom(QString uri);
    void setUri(QString uri);
    QString getUri();
};

#endif // SEUOM_H
