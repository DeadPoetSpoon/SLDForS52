#ifndef SEGEOMETRY_H
#define SEGEOMETRY_H
#include "Xml/element.h"
#include "Ogc/Expr/ogcpropertyname.h"
///
/// \brief The SeGeometry class
/// A Geometry gives reference to a (the) geometry property of a feature to be used for rendering.
/// Geometry提供了一个用于渲染的特性的几何属性。
///
class SeGeometry : public Element
{
public:
    SeGeometry();
private:
    OgcPropertyName* _ogcPropertyName = nullptr;
};

#endif // SEGEOMETRY_H
