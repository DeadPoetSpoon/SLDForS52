#ifndef SLDUSESLDLIBRARY_H
#define SLDUSESLDLIBRARY_H
#include "Xml/element.h"
#include "Se/seonlineresource.h"
class SldUseSLDLibrary:public Element
{
public:
    SldUseSLDLibrary();
private:
    ///
    /// \brief se_OnlineResource 必有元素;
    ///
    SeOnlineResource* se_OnlineResource = nullptr;
};

#endif // SLDUSESLDLIBRARY_H
