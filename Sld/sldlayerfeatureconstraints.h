#ifndef SLDLAYERFEATURECONSTRAINTS_H
#define SLDLAYERFEATURECONSTRAINTS_H
#include "Xml/element.h"
#include "Sld/sldfeaturetypeconstraint.h"
///
/// \brief The SldLayerFeatureConstraints class
/// LayerFeatureConstraints define what features &amp; feature types are referenced in a layer.
/// LayerFeatureConstraints定义什么特性&特性类型在一个层中被引用。
///
class SldLayerFeatureConstraints:public Element
{
public:
    SldLayerFeatureConstraints();
private:
    ///
    /// \brief sld_FeatureTypeConstraints 必有元素;
    ///
    QList<SldFeatureTypeConstraint*> _sldFeatureTypeConstraints;
};

#endif // SLDLAYERFEATURECONSTRAINTS_H
