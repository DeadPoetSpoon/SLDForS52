#ifndef SEGENERALIZELINE_H
#define SEGENERALIZELINE_H
#include "Xml/element.h"
///
/// \brief The SeGeneralizeLine class
/// 是否为常规线
///
class SeGeneralizeLine : public Element
{
public:
    SeGeneralizeLine();
private:
    bool _isGeneralizeLine = false;
};

#endif // SEGENERALIZELINE_H
