#ifndef SLDSERVICE_H
#define SLDSERVICE_H
#include "Xml/element.h"
///
/// \brief The SldService class
/// A Service refers to the type of a remote OWS server.
/// Service指的是远程OWS服务器的类型。
class SldService:public Element
{
public:
    SldService();
    enum SERVICETYPE{WFS,WCS,NONESERVICETYPE};
private:
    SERVICETYPE _serviceType = NONESERVICETYPE;
    QString _service = nullptr;
};

#endif // SLDSERVICE_H
