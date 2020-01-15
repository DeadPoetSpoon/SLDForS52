#ifndef SEWELLKNOWNNAME_H
#define SEWELLKNOWNNAME_H
#include "Xml/element.h"
///
/// \brief The SeWellKnownName class
/// string value
/// 众所周知的名字
///
class SeWellKnownName:public Element
{
public:
    SeWellKnownName();
private:
    QString _wellKnownName;
};

#endif // SEWELLKNOWNNAME_H
