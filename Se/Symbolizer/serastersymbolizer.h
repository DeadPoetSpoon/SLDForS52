#ifndef SERASTERSYMBOLIZER_H
#define SERASTERSYMBOLIZER_H
#include "Se/Symbolizer/sesymbolizer.h"
#include "Se/Symbolizer/segeometry.h"
#include "Se/Symbolizer/seopacity.h"
#include "Se/Symbolizer/sechannelselection.h"
#include "Se/Symbolizer/seoverlapbehavior.h"
#include "Se/Symbolizer/secolormap.h"
#include "Se/Symbolizer/secontrastenhancement.h"
#include "Se/Symbolizer/seshadedrelief.h"
#include "Se/Symbolizer/seimageoutline.h"
///
/// \brief The SeRasterSymbolizer class
/// A "RasterSymbolizer" is used to specify the rendering of raster/matrix-coverage data (e.g., satellite images, DEMs).
/// “RasterSymbolizer”用于指定栅格/矩阵覆盖数据(例如，卫星图像，DEMs)的呈现。
///
class SeRasterSymbolizer : public SeSymbolizer
{
public:
    SeRasterSymbolizer();
private:
    SeGeometry* _seGeometry = nullptr;
    SeOpacity* _seOpacity = nullptr;
    SeChannelSelection* _seChannelSelection = nullptr;
    SeOverlapBehavior* _seOverlapBehavior = nullptr;
    SeColorMap* _seColorMap = nullptr;
    SeContrastEnhancement* _seContrastEnhancement = nullptr;
    SeShadedRelief* _seShadedRelief = nullptr;
    SeImageOutline* _seImageOutline = nullptr;
};

#endif // SERASTERSYMBOLIZER_H
