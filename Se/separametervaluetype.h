#ifndef SEPARAMETERVALUETYPE_H
#define SEPARAMETERVALUETYPE_H
#include "Xml/element.h"
///
/// \brief The SeParameterValueType class
/// The "ParameterValueType" uses WFS-Filter expressions to give values for SE graphic parameters. A "mixed" element-content model is used with textual substitution for values.
///
class SeParameterValueType : public Element
{
public:
    SeParameterValueType();
};

#endif // SEPARAMETERVALUETYPE_H
