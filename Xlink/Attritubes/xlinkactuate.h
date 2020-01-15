#ifndef XLINKACTUATE_H
#define XLINKACTUATE_H
#include "Xml/attribute.h"
///
/// \brief The XlinkActuate class
/// enum value
///
class XlinkActuate : public Attribute
{
public:
    XlinkActuate();
    enum ACTUATETYPE{ONLOAD,ONREQUEST,OTHER,NONEACTUATE};
private:
    ACTUATETYPE _actuateType = NONEACTUATE;
    QString _actuate;
};

#endif // XLINKACTUATE_H
