#ifndef SESYMBOLIZER_H
#define SESYMBOLIZER_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Se/Symbolizer/sebasesymbolizer.h"
#include "Se/Attritubes/seversion.h"
#include "Se/Attritubes/seuom.h"
///
/// \brief The SeSymbolizer class
/// A "SymbolizerType" is an abstract type for encoding the graphical properties used to portray geographic information. Concrete Symbolizer types are derived from this base type.
/// “SymbolizerType”是一种抽象类型，用于编码用于描述地理信息的图形属性。具体的符号化器类型是从这个基类型派生出来的。
///
class SeSymbolizer : public Element
{
public:
    SeSymbolizer();
protected:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SeBaseSymbolizer* _seBaseSymbolizer = nullptr;
    ///
    /// \brief _seVersion 必有属性;
    ///
    SeVersion* _seVersion = nullptr;
    ///
    /// \brief _seUom 必有属性;
    ///
    SeUom* _seUom = nullptr;
};

#endif // SESYMBOLIZER_H
