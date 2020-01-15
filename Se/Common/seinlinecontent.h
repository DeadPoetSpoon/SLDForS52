#ifndef SEINLINECONTENT_H
#define SEINLINECONTENT_H
#include "Xml/element.h"
#include "Se/Attritubes/seencoding.h"
///
/// \brief The SeInlineContent class
/// "InlineContent" is XML- or base64-encoded encoded content in some externally-defined format that is included in an SE in-line.
/// “InlineContent”是XML或base64编码的编码内容，采用一些外部定义的格式，包含在SE内联中。
///
class SeInlineContent : public Element
{
public:
    SeInlineContent();
private:
    QList<Element*> _anyElement;
    QString _base64;
    SeEncoding* _seEncoding = nullptr;
};

#endif // SEINLINECONTENT_H
