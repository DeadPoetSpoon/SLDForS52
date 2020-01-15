#ifndef XLINKTITLE_H
#define XLINKTITLE_H
#include "Xml/attribute.h"
///
/// \brief The XlinkTitle class
/// string value
///
class XlinkTitle : public Attribute
{
public:
    XlinkTitle();
private:
    QString _title;
};

#endif // XLINKTITLE_H
