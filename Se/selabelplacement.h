#ifndef SELABELPLACEMENT_H
#define SELABELPLACEMENT_H
#include "Xml/element.h"
#include "Se/sepointplacement.h"
#include "Se/selineplacement.h"
///
/// \brief The SeLabelPlacement class
/// The "LabelPlacement" specifies where and how a text label should be rendered relative to a geometry. The present mechanism is poorly aligned with CSS/SVG.
/// “LabelPlacement”指定文本标签相对于几何图形应该在何处以及如何呈现。当前的机制与CSS/SVG很不一致。
///
class SeLabelPlacement : public Element
{
public:
    SeLabelPlacement();
    enum PLACEMENTTYPE{POINT,LINE,NONEPLACEMENTTYPE};
private:
    ///
    /// \brief _placementType 两者必选一
    ///
    PLACEMENTTYPE _placementType = NONEPLACEMENTTYPE;
    SePointPlacement* _sePointPlacement = nullptr;
    SeLinePlacement* _seLinePlacement = nullptr;
};

#endif // SELABELPLACEMENT_H
