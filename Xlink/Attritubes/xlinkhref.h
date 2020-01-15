#ifndef XLINKHREF_H
#define XLINKHREF_H
#include "Xml/attribute.h"
///
/// \brief The XlinkHref class
/// anyURI value
///
class XlinkHref : public Attribute
{
public:
    XlinkHref();
private:
    QString _href;
};

#endif // XLINKHREF_H
