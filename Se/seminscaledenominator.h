#ifndef SEMINSCALEDENOMINATOR_H
#define SEMINSCALEDENOMINATOR_H
#include "Xml/element.h"

class SeMinScaleDenominator : public Element
{
public:
    SeMinScaleDenominator();
private:
    double _minScale;
};

#endif // SEMINSCALEDENOMINATOR_H
