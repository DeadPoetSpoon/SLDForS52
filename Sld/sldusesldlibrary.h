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
    /// \brief _seOnlineResource 必有元素;
    ///
    SeOnlineResource* _seOnlineResource = nullptr;
};

#endif // SLDUSESLDLIBRARY_H
