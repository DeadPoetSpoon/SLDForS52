#ifndef SEANCHORPOINTY_H
#define SEANCHORPOINTY_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeAnchorPointY class
/// 锚点Y坐标
///
class SeAnchorPointY : public Element
{
public:
    SeAnchorPointY();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEANCHORPOINTY_H
