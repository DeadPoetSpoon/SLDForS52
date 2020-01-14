#ifndef SEBLUECHANNEL_H
#define SEBLUECHANNEL_H
#include "Xml/element.h"
#include "Se/sesourcechannelname.h"
#include "Se/secontrastenhancement.h"
class SeBlueChannel : public Element
{
public:
    SeBlueChannel();
private:
    ///
    /// \brief _seSourceChannelName 必有属性;
    ///
    SeSourceChannelName* _seSourceChannelName = nullptr;
    SeContrastEnhancement* _seContrastEnhancement = nullptr;
};

#endif // SEBLUECHANNEL_H
