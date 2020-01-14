#ifndef SEDISPLACEMENT_H
#define SEDISPLACEMENT_H
#include "Xml/element.h"
#include "Se/sedisplacementx.h"
#include "Se/sedisplacementy.h"
///
/// \brief The SeDisplacement class
/// A "Displacement" gives X and Y offset displacements to use for rendering a text label, graphic or other Symbolizernear a point.
/// “位移”给出了X和Y的偏移位移，用于在点附近绘制文本标签、图形或其他符号。
///
class SeDisplacement : public Element
{
public:
    SeDisplacement();
private:
    ///
    /// \brief _seDisplacementX 必有元素;
    ///
    SeDisplacementX* _seDisplacementX = nullptr;
    ///
    /// \brief _seDisplacementY 必有元素;
    ///
    SeDisplacementY* _seDisplacementY = nullptr;
};

#endif // SEDISPLACEMENT_H
