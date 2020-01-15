#ifndef SELABEL_H
#define SELABEL_H
//#include "Xml/element.h"
#include "Se/Symbolizer/separametervalue.h"
///
/// \brief The SeLabel class
/// A "Label" specifies the textual content to be rendered.
/// “Label”指定要呈现的文本内容。
///
class SeLabel : public SeParameterValue
{
public:
    SeLabel();
private:
//    SeParameterValue* _seParameterValueType = nullptr;
};

#endif // SELABEL_H
