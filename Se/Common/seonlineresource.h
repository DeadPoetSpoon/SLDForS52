#ifndef SEONLINERESOURCE_H
#define SEONLINERESOURCE_H
#include "Xml/element.h"
#include "Xlink/Attritubes/xlinktype.h"
#include "Xlink/Attritubes/xlinkhref.h"
#include "Xlink/Attritubes/xlinkrole.h"
#include "Xlink/Attritubes/xlinkarcrole.h"
#include "Xlink/Attritubes/xlinktitle.h"
#include "Xlink/Attritubes/xlinkshow.h"
#include "Xlink/Attritubes/xlinkactuate.h"
///
/// \brief The SeOnlineResource class
/// An "OnlineResource" is typically used to refer to an HTTP URL.
/// “OnlineResource”通常用于引用HTTP URL。
///
class SeOnlineResource:public Element
{
public:
    SeOnlineResource();
private:
    //必有属性组xlink:simpleAttrs未添加。已添加
    XlinkType* _xlinkType = nullptr;
    XlinkHref* _xlinkHref = nullptr;
    XlinkRole* _xlinkRole = nullptr;
    XlinkArcrole* _xlinkArcrole = nullptr;
    XlinkTitle* _xlinkTitle = nullptr;
    XlinkShow* _xlinkShow = nullptr;
    XlinkActuate* _xlinkActuate = nullptr;
};

#endif // SEONLINERESOURCE_H
