#ifndef SECOLORMAP_H
#define SECOLORMAP_H
#include "Xml/element.h"
#include "Se/Symbolizer/secategorize.h"
#include "Se/Symbolizer/seinterpolate.h"
///
/// \brief The SeColorMap class
/// A "ColorMap" defines either the colors of a pallette-type raster source or the mapping of numeric pixel values to colors.
/// “ColorMap”定义了托盘类型光栅源的颜色或数字像素值到颜色的映射。
///
class SeColorMap : public Element
{
public:
    SeColorMap();
    enum COLORMAPTYPE{CATEGORIZE,INTERPOLATE};
private:
    ///
    /// \brief _colorMapType 二者必有一;
    ///
    COLORMAPTYPE _colorMapType;
    SeCategorize* _seCategorize = nullptr;
    SeInterpolate* _seInterpolate = nullptr;
};

#endif // SECOLORMAP_H
