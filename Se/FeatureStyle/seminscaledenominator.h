#ifndef SEMINSCALEDENOMINATOR_H
#define SEMINSCALEDENOMINATOR_H
#include "Xml/element.h"
///
/// \brief The SeMinScaleDenominator class
/// double value
/// 最小比例
///
class SeMinScaleDenominator : public Element
{
public:
    SeMinScaleDenominator();
private:
    double _minScale;
};

#endif // SEMINSCALEDENOMINATOR_H
