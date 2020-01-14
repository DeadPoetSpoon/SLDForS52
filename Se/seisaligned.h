#ifndef SEISALIGNED_H
#define SEISALIGNED_H
#include "Xml/element.h"

class SeIsAligned : public Element
{
public:
    SeIsAligned();
private:
    bool _isAligned = false;
};

#endif // SEISALIGNED_H
