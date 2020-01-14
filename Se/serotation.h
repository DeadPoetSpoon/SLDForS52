#ifndef SEROTATION_H
#define SEROTATION_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeRotation : public Element
{
public:
    SeRotation();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEROTATION_H
