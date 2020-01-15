#ifndef SEINITIALGAP_H
#define SEINITIALGAP_H
//#include "Xml/element.h"
#include "Se/Symbolizer/separametervalue.h"
///
/// \brief The SeInitialGap class
/// Initialgap defines the initial empty space, before the first Graphic or Label should be rendered.
/// Initialgap定义了第一个图形或标签应该呈现之前的初始空空间。
///
class SeInitialGap : public SeParameterValue
{
public:
    SeInitialGap();
private:
//    SeParameterValue* _seParameterValueType;
};

#endif // SEINITIALGAP_H
