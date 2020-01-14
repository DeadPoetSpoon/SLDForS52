#ifndef SESVGPARAMETER_H
#define SESVGPARAMETER_H
#include "Se/separametervaluetype.h"

class SeSvgParameter : public SeParameterValueType
{
public:
    SeSvgParameter();
private:
    ///
    /// \brief _name 必要属性;
    ///
    Attribute* _name = nullptr;
};

#endif // SESVGPARAMETER_H
