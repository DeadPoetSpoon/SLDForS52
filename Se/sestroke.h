#ifndef SESTROKE_H
#define SESTROKE_H
#include "Xml/element.h"
#include "Se/segraphicfill.h"
#include "Se/segraphicstroke.h"
#include "Se/sesvgparameter.h"
///
/// \brief The SeStroke class
/// A "Stroke" specifies the appearance of a linear geometry. It is defined in parallel with SVG strokes. The following SvgParameters may be used: "stroke" (color), "stroke-opacity", "stroke-width", "stroke-linejoin", "stroke-linecap", "stroke-dasharray", and "stroke-dashoffset". Others are not officially supported.
/// “Stroke”指定线性几何图形的外观。它是与SVG笔画并行定义的。可以使用以下SvgParameters:“stroke”(颜色)、“stroke-opacity”、“stroke-width”、“stroke-linejoin”、“stroke-linecap”、“stroke-dasharray”和“stroke-dashoffset”。其他的则没有得到官方支持。
///
class SeStroke : public Element
{
public:
    SeStroke();
    enum GRAPHICTYPE{FILL,STROKE,NONEGRAPHICTYPE};
private:
    GRAPHICTYPE _graphicType = NONEGRAPHICTYPE;
    //两者选其一可以没有
    SeGraphicFill* _seGraphicFill = nullptr;
    SeGraphicStroke* _seGraphicStroke = nullptr;
    QList<SeSvgParameter*> _seSvgParameters;
};

#endif // SESTROKE_H
