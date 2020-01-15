#ifndef XLINKROLE_H
#define XLINKROLE_H
#include "Xml/attribute.h"
///
/// \brief The XlinkRole class
/// anyURI value
///
class XlinkRole : public Attribute
{
public:
    XlinkRole();
private:
    QString _role;
};

#endif // XLINKROLE_H
