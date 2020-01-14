#ifndef SEWELLKNOWNNAME_H
#define SEWELLKNOWNNAME_H
#include "Xml/element.h"

class SeWellKnownName:public Element
{
public:
    SeWellKnownName();
private:
    QString _wellKnownName;
};

#endif // SEWELLKNOWNNAME_H
