#ifndef SEDISPLACEMENTY_H
#define SEDISPLACEMENTY_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeDisplacementY : public Element
{
public:
    SeDisplacementY();
private:
    SeParameterValueType*  _seParameterValueType = nullptr;
};

#endif // SEDISPLACEMENTY_H
