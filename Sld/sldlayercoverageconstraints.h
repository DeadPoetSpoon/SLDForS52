#ifndef SLDLAYERCOVERAGECONSTRAINTS_H
#define SLDLAYERCOVERAGECONSTRAINTS_H
#include "Xml/element.h"
#include "Sld/sldcoverageconstraint.h"
class SldLayerCoverageConstraints:public Element
{
public:
    SldLayerCoverageConstraints();
private:
    ///
    /// \brief sld_CoverageConstraints 必要元素;
    ///
    QList<SldCoverageConstraint*> _sldCoverageConstraints;
};

#endif // SLDLAYERCOVERAGECONSTRAINTS_H
