#ifndef SEEXTERNALGRAPHIC_H
#define SEEXTERNALGRAPHIC_H
#include "Xml/element.h"
///
/// \brief The SeExternalGraphic class
/// An "ExternalGraphic" gives a reference to a raster or vector graphical object, either online or inline, in an externally-defined graphic format.
///
class SeExternalGraphic : public Element
{
public:
    SeExternalGraphic();
};

#endif // SEEXTERNALGRAPHIC_H
