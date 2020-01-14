#ifndef SERADIUS_H
#define SERADIUS_H
#include "Xml/element.h"
#include "Se/separametervaluetype.h"

class SeRadius : public Element
{
public:
    SeRadius();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SERADIUS_H
