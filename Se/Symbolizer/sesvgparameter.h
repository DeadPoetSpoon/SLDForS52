#ifndef SESVGPARAMETER_H
#define SESVGPARAMETER_H
#include "Se/Symbolizer/separametervalue.h"
#include "Se/Attritubes/senameattr.h"
///
/// \brief The SeSvgParameter class
/// A "SvgParameter" refers to an SVG/CSS graphical-formatting parameter.  The parameter is identified using the "name" attribute and the content of the element gives the SVG/CSS-coded value.
/// “SvgParameter”指的是SVG/CSS图形格式参数。使用“name”属性标识参数，元素的内容给出SVG/ css编码的值。
///
class SeSvgParameter : public SeParameterValue
{
public:
    SeSvgParameter();
private:
    ///
    /// \brief _name 必要属性;
    ///
    SeNameAttr* _name = nullptr;
};

#endif // SESVGPARAMETER_H
