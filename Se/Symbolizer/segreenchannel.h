#ifndef SEGREENCHANNEL_H
#define SEGREENCHANNEL_H
#include "Xml/element.h"
#include "Se/Symbolizer/sesourcechannelname.h"
#include "Se/Symbolizer/secontrastenhancement.h"
///
/// \brief The SeGreenChannel class
/// 绿色通道
///
class SeGreenChannel : public Element
{
public:
    SeGreenChannel();
private:
    ///
    /// \brief _seSourceChannelName 必有属性;
    ///
    SeSourceChannelName* _seSourceChannelName = nullptr;
    SeContrastEnhancement* _seContrastEnhancement = nullptr;
};

#endif // SEGREENCHANNEL_H
