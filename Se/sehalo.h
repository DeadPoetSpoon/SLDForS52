#ifndef SEHALO_H
#define SEHALO_H
#include "Xml/element.h"
#include "Se/seradius.h"
#include "Se/sefill.h"
///
/// \brief The SeHalo class
/// A "Halo" fills an extended area outside the glyphs of a rendered text label to make the label easier to read over a background.
/// “Halo”填充呈现文本标签的字形之外的扩展区域，使标签在背景上更容易阅读。
///
class SeHalo : public Element
{
public:
    SeHalo();
private:
    SeRadius* _seRadius = nullptr;
    SeFill* _seFill = nullptr;
};

#endif // SEHALO_H
