#ifndef SLDFEATURETYPECONSTRAINT_H
#define SLDFEATURETYPECONSTRAINT_H
#include "element.h"
#include "sefeaturetypename.h"
#include "ogcfilter.h"
#include "sldextent.h"
class SldFeatureTypeConstraint:public Element
{
public:
    SldFeatureTypeConstraint();
private:
    SeFeatureTypeName* se_FeatureTypeName = nullptr;
    OgcFilter* ogc_Filter = nullptr;
    SldExtent* sld_Extent = nullptr;
};

#endif // SLDFEATURETYPECONSTRAINT_H
