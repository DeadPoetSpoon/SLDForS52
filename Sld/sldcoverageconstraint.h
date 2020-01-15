#ifndef SLDCOVERAGECONSTRAINT_H
#define SLDCOVERAGECONSTRAINT_H
#include "Xml/element.h"
#include "Se/Common/secoveragename.h"
#include "Sld/sldcoverageextent.h"
///
/// \brief The SldCoverageConstraint class
/// A CoverageConstraint identifies a specific coverage offering and supplies time and range selection.
/// CoverageConstraint标识一个特定的覆盖范围，提供和供应时间和范围的选择。
///
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
