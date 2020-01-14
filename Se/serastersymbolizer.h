#ifndef SERASTERSYMBOLIZER_H
#define SERASTERSYMBOLIZER_H
#include "Se/sesymbolizer.h"
#include "Se/segeometry.h"
#include "Se/seopacity.h"
#include "Se/sechannelselection.h"
#include "Se/seoverlapbehavior.h"
#include "Se/secolormap.h"
#include "Se/secontrastenhancement.h"
#include "Se/seshadedrelief.h"
#include "Se/seimageoutline.h"
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
