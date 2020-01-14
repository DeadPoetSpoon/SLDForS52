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
    SeFeatureTypeName* _seFeatureTypeName = nullptr;
    OgcFilter* _ogcFilter = nullptr;
    SldExtent* _sldExtent = nullptr;
};

#endif // SLDFEATURETYPECONSTRAINT_H
