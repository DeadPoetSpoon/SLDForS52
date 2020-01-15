#ifndef SEANCHORPOINTX_H
#define SEANCHORPOINTX_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeAnchorPointX class
/// 锚点X坐标
///
class SeAnchorPointX : public Element
{
public:
    SeAnchorPointX();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEANCHORPOINTX_H
