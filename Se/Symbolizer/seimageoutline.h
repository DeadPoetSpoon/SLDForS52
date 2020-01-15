#ifndef SEIMAGEOUTLINE_H
#define SEIMAGEOUTLINE_H
#include "Xml/element.h"
#include "Se/Symbolizer/selinesymbolizer.h"
#include "Se/Symbolizer/sepolygonsymbolizer.h"
///
/// \brief The SeImageOutline class
/// "ImageOutline" specifies how individual source rasters in a multi-raster set (such as a set of satellite-image scenes) should be outlined to make the individual-image locations visible.
/// “ImageOutline”指定如何在多栅格集(如一组卫星图像场景)中勾画单个源栅格，以使单个图像位置可见。
///
class SeImageOutline : public Element
{
public:
    SeImageOutline();
    enum OUTLINETYPE{LINEOUTLINE,POLYGONOUTLINE};
private:
    ///
    /// \brief _outlineType 二者必有一;
    ///
    OUTLINETYPE _outlineType;
    SeLineSymbolizer* _seLineSymbolizer = nullptr;
    SePolygonSymbolizer* _sePolygonSymbolizer = nullptr;
};

#endif // SEIMAGEOUTLINE_H
