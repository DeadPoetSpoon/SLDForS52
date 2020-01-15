#ifndef XLINKSHOW_H
#define XLINKSHOW_H
#include "Xml/attribute.h"
///
/// \brief The XlinkShow class
/// enum value
///
class XlinkShow : public Attribute
{
public:
    XlinkShow();
    enum SHOWTYPE{NEW,REPLACE,EMBED,OTHER,NONESHOWTYPE};
private:
    SHOWTYPE _showType = NONESHOWTYPE;
    QString _show;
};

#endif // XLINKSHOW_H
