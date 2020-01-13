#ifndef SLDCOVERAGEEXTENT_H
#define SLDCOVERAGEEXTENT_H
#include "element.h"
#include "sldrangeaxis.h"
#include "sldtimeperiod.h"
class SldCoverageExtent:public Element
{
public:
    SldCoverageExtent();
private:
    QList<SldRangeAxis*> sld_RangeAxiss;
    SldTimePeriod* sld_TimePeriod = nullptr;
};

#endif // SLDCOVERAGEEXTENT_H
