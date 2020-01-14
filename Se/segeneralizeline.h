#ifndef SEGENERALIZELINE_H
#define SEGENERALIZELINE_H
#include "Xml/element.h"

class SeGeneralizeLine : public Element
{
public:
    SeGeneralizeLine();
private:
    bool _isGeneralizeLine = false;
};

#endif // SEGENERALIZELINE_H
