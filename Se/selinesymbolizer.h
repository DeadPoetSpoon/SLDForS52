#ifndef SELINESYMBOLIZER_H
#define SELINESYMBOLIZER_H
#include "Se/sesymbolizer.h"
#include "Se/segeometry.h"
#include "Se/sestroke.h"
#include "Se/seperpendicularoffset.h"
///
/// \brief The SeLineSymbolizer class
/// A LineSymbolizer is used to render a "stroke" along a linear geometry.
/// LineSymbolizer用于沿着线性几何图形渲染“描边”。
///
class SeLineSymbolizer : public SeSymbolizer
{
public:
    SeLineSymbolizer();
private:
    SeGeometry* _seGeometry = nullptr;
    SeStroke* _seStroke = nullptr;
    SePerpendicularOffset* _sePerpendicularOffset = nullptr;
};

#endif // SELINESYMBOLIZER_H
