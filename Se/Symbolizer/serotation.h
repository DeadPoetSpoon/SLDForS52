#ifndef SEROTATION_H
#define SEROTATION_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeRotation class
/// 旋转角度
///
class SeRotation : public Element
{
public:
    SeRotation();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEROTATION_H
