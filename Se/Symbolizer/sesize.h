#ifndef SESIZE_H
#define SESIZE_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeSize class
/// 尺寸
///
class SeSize : public Element
{
public:
    SeSize();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SESIZE_H
