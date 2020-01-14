#ifndef SLDREMOTEOWS_H
#define SLDREMOTEOWS_H
#include "element.h"
#include "sldservice.h"
#include "seonlineresource.h"
class SldRemoteOWS:public Element
{
public:
    SldRemoteOWS();
private:
    ///
    /// \brief sld_Service 必有元素;
    ///
    SldService* sld_Service = nullptr;
    ///
    /// \brief se_OnlineResource 必有元素;
    ///
    SeOnlineResource* se_OnlineResource = nullptr;
};

#endif // SLDREMOTEOWS_H
