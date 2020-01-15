#ifndef SEPOLYGONSYMBOLIZER_H
#define SEPOLYGONSYMBOLIZER_H
#include "Se/Symbolizer/sesymbolizer.h"
#include "Se/Symbolizer/segeometry.h"
#include "Se/Symbolizer/sefill.h"
#include "Se/Symbolizer/sestroke.h"
#include "Se/Symbolizer/sedisplacement.h"
#include "Se/Symbolizer/seperpendicularoffset.h"
///
/// \brief The SePolygonSymbolizer class
/// A "PolygonSymbolizer" specifies the rendering of a polygon or area geometry, including its interior fill and border stroke.
/// PolygonSymbolizer指定多边形或区域几何图形的呈现，包括其内部填充和边框边框。
///
class SePolygonSymbolizer : public SeSymbolizer
{
public:
    SePolygonSymbolizer();
private:
    SeGeometry* _seGeometry = nullptr;
    SeFill* _seFill = nullptr;
    SeStroke* _seStroke = nullptr;
    SeDisplacement* _seDisplacement = nullptr;
    SePerpendicularOffset* _sePerpendicularOffset = nullptr;
};

#endif // SEPOLYGONSYMBOLIZER_H
