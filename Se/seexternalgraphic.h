#ifndef SEEXTERNALGRAPHIC_H
#define SEEXTERNALGRAPHIC_H
#include "Xml/element.h"
#include "Se/seonlineresource.h"
#include "Se/seinlinecontent.h"
#include "Se/seformat.h"
#include "Se/secolorreplacement.h"
///
/// \brief The SeExternalGraphic class
/// An "ExternalGraphic" gives a reference to a raster or vector graphical object, either online or inline, in an externally-defined graphic format.
/// “ExternalGraphic”以外部定义的图形格式在线或内联地提供对光栅或矢量图形对象的引用。
///
class SeExternalGraphic : public Element
{
public:
    SeExternalGraphic();
    enum EXTERNALTYPE{ONLINE,INLINE,NONEEXTERNALTYPE};
private:
    ///
    /// \brief _external 非NONE;
    ///
    EXTERNALTYPE _external = NONEEXTERNALTYPE;
    //二选一，必有一
    SeOnlineResource* _seOnlineResource = nullptr;
    SeInlineContent* _seInlineContent = nullptr;
    ///
    /// \brief _seFormat 必有元素;
    ///
    SeFormat* _seFormat = nullptr;
    QList<SeColorReplacement*> _seColorReplacements;
};

#endif // SEEXTERNALGRAPHIC_H
