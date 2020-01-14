#ifndef SEANCHORPOINTY_H
#define SEANCHORPOINTY_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"
class SeAnchorPointY : public Element
{
public:
    SeAnchorPointY();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEANCHORPOINTY_H
