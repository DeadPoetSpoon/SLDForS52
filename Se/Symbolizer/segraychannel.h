#ifndef SEGRAYCHANNEL_H
#define SEGRAYCHANNEL_H
#include "Xml/element.h"
#include "Se/Symbolizer/sesourcechannelname.h"
#include "Se/Symbolizer/secontrastenhancement.h"
///
/// \brief The SeGrayChannel class
/// 灰色通道
///
class SeGrayChannel : public Element
{
public:
    SeGrayChannel();
private:
    ///
    /// \brief _seSourceChannelName 必有属性;
    ///
    SeSourceChannelName* _seSourceChannelName = nullptr;
    SeContrastEnhancement* _seContrastEnhancement = nullptr;
};

#endif // SEGRAYCHANNEL_H
