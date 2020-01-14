#ifndef SEANCHORPOINTX_H
#define SEANCHORPOINTX_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeAnchorPointX : public Element
{
public:
    SeAnchorPointX();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEANCHORPOINTX_H
