#ifndef SEGRAPHICSTROKE_H
#define SEGRAPHICSTROKE_H
#include "Xml/element.h"
#include "Se/segraphic.h"
#include "Se/seinitialgap.h"
#include "Se/segap.h"
///
/// \brief The SeGraphicStroke class
/// A "GraphicStroke" defines a repeated-linear graphic pattern to be used for stroking a line.
/// “GraphicStroke”定义了一种重复的线性图形模式，用于描线。
///
class SeGraphicStroke : public Element
{
public:
    SeGraphicStroke();
private:
    ///
    /// \brief _seGraphic 必有元素;
    ///
    SeGraphic* _seGraphic = nullptr;
    SeInitialGap* _seInitialGap = nullptr;
    SeGap* _seGap = nullptr;
};

#endif // SEGRAPHICSTROKE_H
