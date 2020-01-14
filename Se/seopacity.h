#ifndef SEOPACITY_H
#define SEOPACITY_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeOpacity : public Element
{
public:
    SeOpacity();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEOPACITY_H
