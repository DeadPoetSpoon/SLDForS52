#ifndef SLDRANGEAXIS_H
#define SLDRANGEAXIS_H
#include "element.h"
#include "sename.h"
#include "sldvalue.h"
class SldRangeAxis:public Element
{
public:
    SldRangeAxis();
private:
    SeName* se_Name = nullptr;
    SldValue* sld_Value = nullptr;
};

#endif // SLDRANGEAXIS_H
