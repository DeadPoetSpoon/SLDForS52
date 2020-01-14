#ifndef SLDFEATURETYPECONSTRAINT_H
#define SLDFEATURETYPECONSTRAINT_H
#include "Xml/element.h"
#include "Se/sefeaturetypename.h"
#include "Ogc/ogcfilter.h"
#include "Sld/sldextent.h"
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
