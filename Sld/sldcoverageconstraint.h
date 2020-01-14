#ifndef SLDCOVERAGECONSTRAINT_H
#define SLDCOVERAGECONSTRAINT_H
#include "Xml/element.h"
#include "Se/secoveragename.h"
#include "Sld/sldcoverageextent.h"
class SldCoverageConstraint:public Element
{
public:
    SldCoverageConstraint();
private:
    ///
    /// \brief se_CoverageName 必要属性;
    ///
    SeCoverageName* _seCoverageName = nullptr;
    SldCoverageExtent* _sldCoverageExtent = nullptr;
};

#endif // SLDCOVERAGECONSTRAINT_H
