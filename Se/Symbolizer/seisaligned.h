#ifndef SEISALIGNED_H
#define SEISALIGNED_H
#include "Xml/element.h"
///
/// \brief The SeIsAligned class
/// bool value
/// 是否对齐
///
class SeIsAligned : public Element
{
public:
    SeIsAligned();
private:
    bool _isAligned = false;
};

#endif // SEISALIGNED_H
