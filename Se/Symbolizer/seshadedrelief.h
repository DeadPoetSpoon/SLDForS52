#ifndef SESHADEDRELIEF_H
#define SESHADEDRELIEF_H
#include "Xml/element.h"
#include "Se/Symbolizer/sebrightnessonly.h"
#include "Se/Symbolizer/serelieffactor.h"
///
/// \brief The SeShadedRelief class
/// "ShadedRelief" specifies the application of relief shading (or "hill shading") to a DEM raster to give it somewhat of a three-dimensional effect and to make elevation changes more visible.
/// “ShadedRelief”指定了对DEM栅格应用地形阴影(或“山峦阴影”)，使其具有某种三维效果，并使高程变化更加明显。
///
class SeShadedRelief : public Element
{
public:
    SeShadedRelief();
private:
    SeBrightnessOnly* _seBrightnessOnly = nullptr;
    SeReliefFactor* _seReliefFactor = nullptr;
};

#endif // SESHADEDRELIEF_H
