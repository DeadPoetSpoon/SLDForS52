#ifndef SERADIUS_H
#define SERADIUS_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeRadius class
/// 半径
///
class SeRadius : public Element
{
public:
    SeRadius();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SERADIUS_H
