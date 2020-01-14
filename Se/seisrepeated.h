#ifndef SEISREPEATED_H
#define SEISREPEATED_H
#include "Xml/element.h"

class SeIsRepeated : public Element
{
public:
    SeIsRepeated();
private:
    bool _isRepeated = false;
};

#endif // SEISREPEATED_H
