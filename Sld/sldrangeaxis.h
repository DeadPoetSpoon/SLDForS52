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
    SeName* _seName = nullptr;
    SldValue* _sldValue = nullptr;
};

#endif // SLDRANGEAXIS_H
