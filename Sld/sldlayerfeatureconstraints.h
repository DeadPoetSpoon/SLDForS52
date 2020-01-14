#ifndef SLDLAYERFEATURECONSTRAINTS_H
#define SLDLAYERFEATURECONSTRAINTS_H
#include "Xml/element.h"
#include "Sld/sldfeaturetypeconstraint.h"
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
