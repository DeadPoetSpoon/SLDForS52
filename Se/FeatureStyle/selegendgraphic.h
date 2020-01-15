#ifndef SELEGENDGRAPHIC_H
#define SELEGENDGRAPHIC_H
#include "Xml/element.h"
#include "Se/Symbolizer/segraphic.h"
///
/// \brief The SeLegendGraphic class
/// 说明图形
///
class SeLegendGraphic : public Element
{
public:
    SeLegendGraphic();
private:
    ///
    /// \brief _seGraphic 必有属性;
    ///
    SeGraphic* _seGraphic = nullptr;
};

#endif // SELEGENDGRAPHIC_H
