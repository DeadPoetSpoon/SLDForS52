#ifndef SELABEL_H
#define SELABEL_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SeLabel class
/// A "Label" specifies the textual content to be rendered.
/// “Label”指定要呈现的文本内容。
///
class SeLabel : public Element
{
public:
    SeLabel();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SELABEL_H
