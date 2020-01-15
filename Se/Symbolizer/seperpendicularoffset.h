#ifndef SEPERPENDICULAROFFSET_H
#define SEPERPENDICULAROFFSET_H
#include "Xml/element.h"
#include "Se/Symbolizer/separametervaluetype.h"
///
/// \brief The SePerpendicularOffset class
/// A "PerpendicularOffset" gives the perpendicular distance away from a line to draw a label.
/// “PerpendicularOffset”给出了从一条线到一个标签的垂直距离。
///
class SePerpendicularOffset : public Element
{
public:
    SePerpendicularOffset();
private:
    SeParameterValueType* _seParameterValueType = nullptr;
};

#endif // SEPERPENDICULAROFFSET_H
