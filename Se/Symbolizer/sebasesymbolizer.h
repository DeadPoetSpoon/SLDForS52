#ifndef SEBASESYMBOLIZER_H
#define SEBASESYMBOLIZER_H
#include "Xml/element.h"
#include "Se/Common/seonlineresource.h"
///
/// \brief The SeBaseSymbolizer class
/// A "BaseSymbolizer" defines the default properties of a Symbolizer to be those of an external Symbolizer, which will frequently be inside of an OGC Symbolizer repository. The Symbolizer properties given in-line override the base-Symbolizer properties.
/// “BaseSymbolizer”将符号化程序的默认属性定义为外部符号化程序的属性，外部符号化程序通常位于OGC符号化程序存储库中。内联给出的符号赋予属性覆盖基符号赋予属性。
///
class SeBaseSymbolizer : public Element
{
public:
    SeBaseSymbolizer();
private:
    ///
    /// \brief _seOnlineResource 必有元素;
    ///
    SeOnlineResource* _seOnlineResource = nullptr;
};

#endif // SEBASESYMBOLIZER_H
