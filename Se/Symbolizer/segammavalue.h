#ifndef SEGAMMAVALUE_H
#define SEGAMMAVALUE_H
#include "Xml/element.h"
///
/// \brief The SeGammaValue class
/// double value
///
class SeGammaValue : public Element
{
public:
    SeGammaValue();
private:
    double _gammaValue;
};

#endif // SEGAMMAVALUE_H
