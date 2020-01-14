#ifndef SEGRAPHICFILL_H
#define SEGRAPHICFILL_H
#include "Xml/element.h"
#include "Se/segraphic.h"
///
/// \brief The SeGraphicFill class
/// A "GraphicFill" defines repeated-graphic filling (stippling) pattern for an area geometry.
/// “GraphicFill”定义了区域几何图形的重复图形填充(点画)模式。
///
class SeGraphicFill : public Element
{
public:
    SeGraphicFill();
private:
    ///
    /// \brief _seGraphic 必有元素;
    ///
    SeGraphic* _seGraphic = nullptr;
};

#endif // SEGRAPHICFILL_H
