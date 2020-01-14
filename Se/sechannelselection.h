#ifndef SECHANNELSELECTION_H
#define SECHANNELSELECTION_H
#include "Xml/element.h"
#include "Se/seredchannel.h"
#include "Se/segreenchannel.h"
#include "Se/sebluechannel.h"
#include "Se/segraychannel.h"
///
/// \brief The SeChannelSelection class
/// "ChannelSelection" specifies the false-color channel selection for a multi-spectral raster source.
/// “ChannelSelection”指定多光谱光栅源的假彩色通道选择。
///
class SeChannelSelection : public Element
{
public:
    SeChannelSelection();
    enum CHANNELTYPE{RGB,GRAY,NONECHANNELTYPE};
private:
    ///
    /// \brief _channelType 二者必有一
    ///
    CHANNELTYPE _channelType = NONECHANNELTYPE;
    SeRedChannel* _seRedChannel = nullptr;
    SeGreenChannel* _seGreenChannel = nullptr;
    SeBlueChannel* _seBlueChannel = nullptr;
    SeGrayChannel* _seSeGrayChannel = nullptr;
};

#endif // SECHANNELSELECTION_H
