#ifndef SEOPACITY_H
#define SEOPACITY_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeOpacity class
/// 透明度
///
class SeOpacity : public Element
{
public:
    SeOpacity();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEOPACITY_H
