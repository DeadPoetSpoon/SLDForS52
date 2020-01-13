#ifndef SLDISDEFAULT_H
#define SLDISDEFAULT_H
#include "element.h"

class SldIsDefault:public Element
{
public:
    SldIsDefault();
private:
    bool _isDefault;
};

#endif // SLDISDEFAULT_H
