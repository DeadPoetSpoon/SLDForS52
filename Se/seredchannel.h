#ifndef SEREDCHANNEL_H
#define SEREDCHANNEL_H
#include "Xml/element.h"
#include "Se/sesourcechannelname.h"
#include "Se/secontrastenhancement.h"
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
