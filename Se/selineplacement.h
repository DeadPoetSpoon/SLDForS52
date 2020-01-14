#ifndef SELINEPLACEMENT_H
#define SELINEPLACEMENT_H
#include "Xml/element.h"
#include "Se/seperpendicularoffset.h"
#include "Se/seisrepeated.h"
#include "Se/seinitialgap.h"
#include "Se/segap.h"
#include "Se/seisaligned.h"
#include "Se/segeneralizeline.h"
///
/// \brief The SeLinePlacement class
/// A "LinePlacement" specifies how a text label should be rendered relative to a linear geometry.
/// “LinePlacement”指定文本标签相对于线性几何图形的呈现方式。
///
class SeLinePlacement : public Element
{
public:
    SeLinePlacement();
private:
    SePerpendicularOffset* _sePerpendicularOffset = nullptr;
    SeIsRepeated* _seIsRepeated = nullptr;
    SeInitialGap* _seInitialGap = nullptr;
    SeGap* _seGap = nullptr;
    SeIsAligned* _seIsAligned = nullptr;
    SeGeneralizeLine* _seGeneralizeLine = nullptr;
};

#endif // SELINEPLACEMENT_H
