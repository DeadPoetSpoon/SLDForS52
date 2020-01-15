#ifndef SLDLAYERCOVERAGECONSTRAINTS_H
#define SLDLAYERCOVERAGECONSTRAINTS_H
#include "Xml/element.h"
#include "Sld/sldcoverageconstraint.h"
///
/// \brief The SldLayerCoverageConstraints class
/// LayerCoverageConstraints define what coverage offering subsets are referenced in a layer.
/// layercoverageconstraints定义了在一个层中引用的覆盖率子集。
///
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
