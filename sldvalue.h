#ifndef SLDVALUE_H
#define SLDVALUE_H
#include "element.h"

class SldValue:public Element
{
public:
    SldValue();
private:
    QString _value;
};

#endif // SLDVALUE_H
