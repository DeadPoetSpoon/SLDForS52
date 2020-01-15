#ifndef SEDISPLACEMENTX_H
#define SEDISPLACEMENTX_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeDisplacementX class
/// 位移X
///
class SeDisplacementX : public Element
{
public:
    SeDisplacementX();
private:
    SeParameterValueType*  _seParameterValueType = nullptr;
};

#endif // SEDISPLACEMENTX_H
