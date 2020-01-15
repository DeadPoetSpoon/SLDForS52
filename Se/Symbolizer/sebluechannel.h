#ifndef SEBLUECHANNEL_H
#define SEBLUECHANNEL_H
#include "Xml/element.h"
#include "Se/Symbolizer/sesourcechannelname.h"
#include "Se/Symbolizer/secontrastenhancement.h"
///
/// \brief The SeBlueChannel class
/// 蓝色通道
///
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
