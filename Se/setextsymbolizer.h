#ifndef SETEXTSYMBOLIZER_H
#define SETEXTSYMBOLIZER_H
#include "Se/sesymbolizer.h"
#include "Se/segeometry.h"
#include "Se/selabel.h"
#include "Se/sefont.h"
#include "Se/selabelplacement.h"
#include "Se/sehalo.h"
#include "Se/sefill.h"
///
/// \brief The SeTextSymbolizer class
/// A "TextSymbolizer" is used to render text labels according to various graphical parameters.
/// “TextSymbolizer”用于根据各种图形参数呈现文本标签。
///
class SeTextSymbolizer : public SeSymbolizer
{
public:
    SeTextSymbolizer();
private:
    SeGeometry* _seGeometry = nullptr;
    SeLabel* _seLabel = nullptr;
    SeFont* _seFont = nullptr;
    SeLabelPlacement* _seLabelPlacement = nullptr;
    SeHalo* _seHalo = nullptr;
    SeFill* _seFill = nullptr;
};

#endif // SETEXTSYMBOLIZER_H
