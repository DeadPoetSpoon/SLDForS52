#ifndef SLDFEATURETYPECONSTRAINT_H
#define SLDFEATURETYPECONSTRAINT_H
#include "Xml/element.h"
#include "Se/Common/sefeaturetypename.h"
#include "Ogc/ogcfilter.h"
#include "Sld/sldextent.h"
///
/// \brief The SldFeatureTypeConstraint class
/// A FeatureTypeConstraint identifies a specific feature type and supplies fitlering.
/// FeatureTypeConstraint标识特定的功能类型并提供适配。
///
class SldFeatureTypeConstraint:public Element
{
public:
    SldFeatureTypeConstraint();
private:
    SeFeatureTypeName* _seFeatureTypeName = nullptr;
    OgcFilter* _ogcFilter = nullptr;
    QList<SldExtent*> _sldExtents;
};

#endif // SLDFEATURETYPECONSTRAINT_H
