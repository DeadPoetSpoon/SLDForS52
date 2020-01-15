#ifndef SLDTIMEPERIOD_H
#define SLDTIMEPERIOD_H
#include "Xml/element.h"
///
/// \brief The SldTimePeriod class
/// string value
/// 时期
///
class SldTimePeriod:public Element
{
public:
    SldTimePeriod();
private:
    QString _timePeriod;
};

#endif // SLDTIMEPERIOD_H
