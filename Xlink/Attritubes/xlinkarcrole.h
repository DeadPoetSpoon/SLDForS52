#ifndef XLINKARCROLE_H
#define XLINKARCROLE_H
#include "Xml/attribute.h"
///
/// \brief The XlinkArcrole class
/// anyURI value
///
class XlinkArcrole : public Attribute
{
public:
    XlinkArcrole();
private:
    QString _arcrolr;
};

#endif // XLINKARCROLE_H
