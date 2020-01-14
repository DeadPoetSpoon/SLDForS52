#ifndef SLDLAYERFEATURECONSTRAINTS_H
#define SLDLAYERFEATURECONSTRAINTS_H
#include "element.h"
#include "sldfeaturetypeconstraint.h"
class SldLayerFeatureConstraints:public Element
{
public:
    SldLayerFeatureConstraints();
private:
    ///
    /// \brief sld_FeatureTypeConstraints 必有元素;
    ///
    QList<SldFeatureTypeConstraint*> sld_FeatureTypeConstraints;
};

#endif // SLDLAYERFEATURECONSTRAINTS_H
