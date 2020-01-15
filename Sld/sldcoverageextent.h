#ifndef SLDCOVERAGEEXTENT_H
#define SLDCOVERAGEEXTENT_H
#include "Xml/element.h"
#include "Sld/sldrangeaxis.h"
#include "Sld/sldtimeperiod.h"
///
/// \brief The SldCoverageExtent class
/// The CoverageExtent describes the time or range selections.
/// CoverageExtent描述时间或范围选择。
///
class SldCoverageExtent:public Element
{
public:
    SldCoverageExtent();
private:
    QList<SldRangeAxis*> _sldRangeAxiss;
    SldTimePeriod* _sldTimePeriod = nullptr;
};

#endif // SLDCOVERAGEEXTENT_H
