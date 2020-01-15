#ifndef SEREDCHANNEL_H
#define SEREDCHANNEL_H
#include "Xml/element.h"
#include "Se/Symbolizer/sesourcechannelname.h"
#include "Se/Symbolizer/secontrastenhancement.h"
///
/// \brief The SeRedChannel class
/// 红色通道
///
class SeRedChannel : public Element
{
public:
    SeRedChannel();
private:
    ///
    /// \brief _seSourceChannelName 必有属性;
    ///
    SeSourceChannelName* _seSourceChannelName = nullptr;
    SeContrastEnhancement* _seContrastEnhancement = nullptr;
};

#endif // SEREDCHANNEL_H
