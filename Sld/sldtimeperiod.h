#ifndef SLDTIMEPERIOD_H
#define SLDTIMEPERIOD_H
#include "Xml/element.h"

class SldTimePeriod:public Element
{
public:
    SldTimePeriod();
private:
    QString _timePeriod;
};

#endif // SLDTIMEPERIOD_H
