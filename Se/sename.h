#ifndef SENAME_H
#define SENAME_H
#include "Xml/element.h"

class SeName:public Element
{
public:
    SeName();
private:
    QString _name;
};

#endif // SENAME_H
