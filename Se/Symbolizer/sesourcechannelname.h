#ifndef SESOURCECHANNELNAME_H
#define SESOURCECHANNELNAME_H
#include "Xml/element.h"
///
/// \brief The SeSourceChannelName class
/// string value
/// 原通道名字
///
class SeSourceChannelName : public Element
{
public:
    SeSourceChannelName();
private:
    QString _seSourceChannelName;
};

#endif // SESOURCECHANNELNAME_H
