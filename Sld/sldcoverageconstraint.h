#ifndef SLDCOVERAGECONSTRAINT_H
#define SLDCOVERAGECONSTRAINT_H
#include "element.h"
#include "secoveragename.h"
#include "sldcoverageextent.h"
class SldCoverageConstraint:public Element
{
public:
    SldCoverageConstraint();
private:
    ///
    /// \brief se_CoverageName 必要属性;
    ///
    SeCoverageName* se_CoverageName = nullptr;
    SldCoverageExtent* sld_CoverageExtent = nullptr;
};

#endif // SLDCOVERAGECONSTRAINT_H
