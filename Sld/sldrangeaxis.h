#ifndef SLDRANGEAXIS_H
#define SLDRANGEAXIS_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Sld/sldvalue.h"
class SldRangeAxis:public Element
{
public:
    SldRangeAxis();
private:
    SeName* se_Name = nullptr;
    SldValue* sld_Value = nullptr;
};

#endif // SLDRANGEAXIS_H
