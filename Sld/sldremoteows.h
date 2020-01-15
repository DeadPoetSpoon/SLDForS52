#ifndef SLDREMOTEOWS_H
#define SLDREMOTEOWS_H
#include "Xml/element.h"
#include "Sld/sldservice.h"
#include "Se/Common/seonlineresource.h"
///
/// \brief The SldRemoteOWS class
/// A RemoteOWS gives a reference to a remote WFS/WCS/other-OWS server.
/// RemoteOWS提供对远程WFS/WCS/other-OWS服务器的引用。
///
class SldRemoteOWS:public Element
{
public:
    SldRemoteOWS();
private:
    ///
    /// \brief _sldService 必有元素;
    ///
    SldService* _sldService = nullptr;
    ///
    /// \brief _seOnlineResource 必有元素;
    ///
    SeOnlineResource* _seOnlineResource = nullptr;
};

#endif // SLDREMOTEOWS_H
