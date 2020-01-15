#ifndef SLDVALUE_H
#define SLDVALUE_H
#include "Xml/element.h"
///
/// \brief The SldValue class
/// string value
/// 值
///
class SldValue:public Element
{
public:
    SldValue();
private:
    QString _value;
};

#endif // SLDVALUE_H
