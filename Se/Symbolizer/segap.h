#ifndef SEGAP_H
#define SEGAP_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeGap class
/// Gap defines the empty space between two Graphics or Labels.
/// Gap定义了两个图形或标签之间的空白空间。
///
class SeGap : public Element
{
public:
    SeGap();
private:
    SeParameterValueType* _seParameterValueType;
};

#endif // SEGAP_H
