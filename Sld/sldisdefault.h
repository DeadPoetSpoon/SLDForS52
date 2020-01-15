#ifndef SLDISDEFAULT_H
#define SLDISDEFAULT_H
#include "Xml/element.h"
///
/// \brief The SldIsDefault class
/// bool value
/// 是否为默认
///
class SldIsDefault:public Element
{
public:
    SldIsDefault();
private:
    bool _isDefault;
};

#endif // SLDISDEFAULT_H
