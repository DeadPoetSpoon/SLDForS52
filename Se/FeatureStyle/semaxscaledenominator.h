#ifndef SEMAXSCALEDENOMINATOR_H
#define SEMAXSCALEDENOMINATOR_H
#include "Xml/element.h"
///
/// \brief The SeMaxScaleDenominator class
/// double value
/// 最大比例
///
class SeMaxScaleDenominator : public Element
{
public:
    SeMaxScaleDenominator();
private:
    double _maxScale;
};

#endif // SEMAXSCALEDENOMINATOR_H
