#ifndef SLDLAYERCOVERAGECONSTRAINTS_H
#define SLDLAYERCOVERAGECONSTRAINTS_H
#include "element.h"
#include "sldcoverageconstraint.h"
class SldLayerCoverageConstraints:public Element
{
public:
    SldLayerCoverageConstraints();
private:
    ///
    /// \brief sld_CoverageConstraints 必要元素;
    ///
    QList<SldCoverageConstraint*> sld_CoverageConstraints;
};

#endif // SLDLAYERCOVERAGECONSTRAINTS_H
