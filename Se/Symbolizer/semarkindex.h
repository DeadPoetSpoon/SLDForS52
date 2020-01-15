#ifndef SEMARKINDEX_H
#define SEMARKINDEX_H
#include "Xml/element.h"
///
/// \brief The SeMarkIndex class
/// int value
/// Mark 索引值
///
class SeMarkIndex : public Element
{
public:
    SeMarkIndex();
private:
    int _markIndex;
};

#endif // SEMARKINDEX_H
