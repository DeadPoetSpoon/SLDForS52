#ifndef SEFILL_H
#define SEFILL_H
#include "Xml/element.h"
#include "Se/Symbolizer/segraphicfill.h"
#include "Se/Symbolizer/sesvgparameter.h"
///
/// \brief The SeFill class
/// A "Fill" specifies the pattern for filling an area geometry. The allowed SvgParameters are: "fill" (color) and "fill-opacity".
/// “Fill”指定填充区域几何图形的模式。支持的SvgParameters是:“填充”(颜色)和“填充不透明度”。
///
class SeFill : public Element
{
public:
    SeFill();
private:
    SeGraphicFill* _seGraphicFill = nullptr;
    QList<SeSvgParameter*> _seSvgParameters;
};

#endif // SEFILL_H
