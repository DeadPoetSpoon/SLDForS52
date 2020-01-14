#ifndef SEANCHORPOINT_H
#define SEANCHORPOINT_H
#include "Xml/element.h"
#include "Se/seanchorpointx.h"
#include "Se/seanchorpointy.h"
///
/// \brief The SeAnchorPoint class
/// An "AnchorPoint" identifies the location inside of a text label to use an an 'anchor' for positioning it relative to a point geometry.
/// “AnchorPoint”标识文本标签内的位置，使用“锚点”将其相对于点几何图形进行定位。
///
class SeAnchorPoint : public Element
{
public:
    SeAnchorPoint();
private:
    ///
    /// \brief _seAnchorPointX 必有元素;
    ///
    SeAnchorPointX* _seAnchorPointX = nullptr;
    ///
    /// \brief _seAnchorPointY 必有元素;
    ///
    SeAnchorPointY* _seAnchorPointY = nullptr;
};

#endif // SEANCHORPOINT_H
