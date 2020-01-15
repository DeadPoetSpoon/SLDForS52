#ifndef SENAME_H
#define SENAME_H
#include "Xml/element.h"
///
/// \brief The SeName class
/// string value
/// 名字
///
class SeName:public Element
{
public:
    SeName();
private:
    QString _name;
};

#endif // SENAME_H
