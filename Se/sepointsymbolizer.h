#ifndef SEPOINTSYMBOLIZER_H
#define SEPOINTSYMBOLIZER_H
#include "Se/sesymbolizer.h"
#include "Se/segeometry.h"
#include "Se/segraphic.h"
///
/// \brief The SePointSymbolizer class
/// A "PointSymbolizer" specifies the rendering of a "graphic Symbolizer" at a point.
/// “PointSymbolizer”指定“图形符号赋予器”在某一点的呈现。
///
class SePointSymbolizer : public SeSymbolizer
{
public:
    SePointSymbolizer();
private:
    SeGeometry* _seGeometry = nullptr;
    SeGraphic* _seGraphic = nullptr;
};

#endif // SEPOINTSYMBOLIZER_H
