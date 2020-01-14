#ifndef SLDSERVICE_H
#define SLDSERVICE_H
#include "Xml/element.h"

class SldService:public Element
{
public:
    SldService();
    enum SERVICETYPE{WFS,WCS,NONESERVICETYPE};
private:
    SERVICETYPE _serviceType = NONESERVICETYPE;
};

#endif // SLDSERVICE_H
