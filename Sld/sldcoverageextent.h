#ifndef SLDCOVERAGEEXTENT_H
#define SLDCOVERAGEEXTENT_H
#include "Xml/element.h"
#include "Sld/sldrangeaxis.h"
#include "Sld/sldtimeperiod.h"
class SldCoverageExtent:public Element
{
public:
    SldCoverageExtent();
private:
    QList<SldRangeAxis*> _sldRangeAxiss;
    SldTimePeriod* _sldTimePeriod = nullptr;
};

#endif // SLDCOVERAGEEXTENT_H
