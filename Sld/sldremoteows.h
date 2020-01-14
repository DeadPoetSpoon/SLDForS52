#ifndef SLDREMOTEOWS_H
#define SLDREMOTEOWS_H
#include "Xml/element.h"
#include "Sld/sldservice.h"
#include "Se/seonlineresource.h"
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
