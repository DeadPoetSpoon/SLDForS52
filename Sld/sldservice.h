#ifndef SLDSERVICE_H
#define SLDSERVICE_H
#include "Xml/element.h"

class SldService:public Element
{
public:
    SldService();
    enum SERVICETYPE{WFS,WCS};
private:
    SERVICETYPE _serviceType = WFS;
};

#endif // SLDSERVICE_H
