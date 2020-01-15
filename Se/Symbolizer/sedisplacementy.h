#ifndef SEDISPLACEMENTY_H
#define SEDISPLACEMENTY_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeDisplacementY class
/// 位移Y
///
class SeDisplacementY : public Element
{
public:
    SeDisplacementY();
private:
    SeParameterValueType*  _seParameterValueType = nullptr;
};

#endif // SEDISPLACEMENTY_H
