#ifndef SEDISPLACEMENTX_H
#define SEDISPLACEMENTX_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeDisplacementX : public Element
{
public:
    SeDisplacementX();
private:
    SeParameterValueType*  _seParameterValueType = nullptr;
};

#endif // SEDISPLACEMENTX_H
