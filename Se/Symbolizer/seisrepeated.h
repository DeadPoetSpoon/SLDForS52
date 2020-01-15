#ifndef SEISREPEATED_H
#define SEISREPEATED_H
#include "Xml/element.h"
///
/// \brief The SeIsRepeated class
/// bool value
/// 是否重复
///
class SeIsRepeated : public Element
{
public:
    SeIsRepeated();
private:
    bool _isRepeated = false;
};

#endif // SEISREPEATED_H
