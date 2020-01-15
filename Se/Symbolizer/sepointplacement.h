#ifndef SEPOINTPLACEMENT_H
#define SEPOINTPLACEMENT_H
#include "Xml/element.h"
#include "Se/Symbolizer/seanchorpoint.h"
#include "Se/Symbolizer/sedisplacement.h"
#include "Se/Symbolizer/serotation.h"
///
/// \brief The SePointPlacement class
/// A "PointPlacement" specifies how a text label should be rendered relative to a geometric point.
/// “PointPlacement”指定文本标签相对于几何点的呈现方式。
///
class SePointPlacement : public Element
{
public:
    SePointPlacement();
private:
    SeAnchorPoint* _seAnchorPoint = nullptr;
    SeDisplacement* _seDisplacement = nullptr;
    SeRotation* _seRotation = nullptr;
};

#endif // SEPOINTPLACEMENT_H
