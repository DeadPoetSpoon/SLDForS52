#ifndef SEMAXSCALEDENOMINATOR_H
#define SEMAXSCALEDENOMINATOR_H
#include "Xml/element.h"

class SeMaxScaleDenominator : public Element
{
public:
    SeMaxScaleDenominator();
private:
    double _maxScale;
};

#endif // SEMAXSCALEDENOMINATOR_H
