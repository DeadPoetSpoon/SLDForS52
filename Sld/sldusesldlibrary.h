#ifndef SLDUSESLDLIBRARY_H
#define SLDUSESLDLIBRARY_H
#include "Xml/element.h"
#include "Se/Common/seonlineresource.h"
///
/// \brief The SldUseSLDLibrary class
/// The UseSLDLibrary tag specifies that an external SLD document
/// should be used as a "library" of named layers and styles to
/// augment the set of named layers and styles that are available
/// for use inside of a WMS.  In the event of name collisions, the
/// SLD library takes precedence over the ones internal to the WMS.
/// Any number of libraries may be specified in an SLD and each
/// successive library takes precedence over the former ones in the
/// case of name collisions.
/// UseSLDLibrary标记指定一个外部SLD文档应该用作命名层和样式的“库”，以增加可用于
/// WMS内部的命名层和样式集。在发生名称冲突时，SLD库优先于WMS内部库。SLD中可以指定
/// 任意数量的库，在名称冲突的情况下，每个后续库都优先于前一个库。
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
