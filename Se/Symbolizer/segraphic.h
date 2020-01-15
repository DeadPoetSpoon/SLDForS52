#ifndef SEGRAPHIC_H
#define SEGRAPHIC_H
#include "Xml/element.h"
#include "Se/Symbolizer/seexternalgraphic.h"
#include "Se/Symbolizer/semark.h"
#include "Se/Symbolizer/seopacity.h"
#include "Se/Symbolizer/sesize.h"
#include "Se/Symbolizer/serotation.h"
#include "Se/Symbolizer/seanchorpoint.h"
#include "Se/Symbolizer/sedisplacement.h"
///
/// \brief The SeGraphic class
/// A "Graphic" specifies or refers to a "graphic Symbolizer" with inherent shape, size, and coloring.
/// “Graphic”指定或引用具有固有形状、大小和颜色的“graphic Symbolizer”。
///
class SeGraphic : public Element
{
public:
    SeGraphic();
    enum GRAPHICTYPE{EXTERNAL,MARK,NONEGRAPHICTYPE};
private:
    GRAPHICTYPE _graphicType = NONEGRAPHICTYPE;
    QList<SeExternalGraphic*> _seExternalGraphics;
    QList<SeMark*> _seMarks;
    SeOpacity* _seOpacity = nullptr;
    SeSize* _seSize = nullptr;
    SeRotation* _seRotation = nullptr;
    SeAnchorPoint* _seAnchorPoint = nullptr;
    SeDisplacement* _seDisplacement = nullptr;
};

#endif // SEGRAPHIC_H
