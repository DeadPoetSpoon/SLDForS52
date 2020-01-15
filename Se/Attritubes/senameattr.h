#ifndef SENAMEATTR_H
#define SENAMEATTR_H
#include "Xml/attribute.h"
///
/// \brief The SeNameAttr class
/// 名字属性
///
class SeNameAttr : public Attribute
{
public:
    SeNameAttr();
private:
    QString _name;
};

#endif // SENAMEATTR_H
