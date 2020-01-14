#ifndef SEFONT_H
#define SEFONT_H
#include "Xml/element.h"
#include "Se/sesvgparameter.h"
///
/// \brief The SeFont class
/// A "Font" element specifies the text font to use. The allowed SvgParameters are: "font-family", "font-style", "font-weight", and "font-size".
/// “Font”元素指定要使用的文本字体。支持的SvgParameters是:“font-family”、“font-style”、“font-weight”和“font-size”。
///
class SeFont : public Element
{
public:
    SeFont();
private:
    QList<SeSvgParameter*> _seSvgParameters;
};

#endif // SEFONT_H
