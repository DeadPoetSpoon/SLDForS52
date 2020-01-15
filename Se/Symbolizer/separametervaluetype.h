#ifndef SEPARAMETERVALUETYPE_H
#define SEPARAMETERVALUETYPE_H
#include "Xml/element.h"
#include "Ogc/ogcexpression.h"
///
/// \brief The SeParameterValueType class
/// The "ParameterValueType" uses WFS-Filter expressions to give values for SE graphic parameters. A "mixed" element-content model is used with textual substitution for values.
/// “ParameterValueType”使用WFS-Filter表达式为SE图形参数赋值。“混合”的元素-内容模型与文本替代值一起使用。
///
class SeParameterValueType : public Element
{
public:
    SeParameterValueType();
protected:
    QList<OgcExpression*> _ogcExpressions;

};

#endif // SEPARAMETERVALUETYPE_H
