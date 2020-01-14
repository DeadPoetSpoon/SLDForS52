#ifndef SEMARK_H
#define SEMARK_H
#include "Xml/element.h"
#include "Se/sewellknownname.h"
#include "Se/seonlineresource.h"
#include "Se/seinlinecontent.h"
#include "Se/seformat.h"
#include "Se/semarkindex.h"
//禁止套娃
//#include "Se/sefill.h"
//#include "Se/sestroke.h"
class SeFill;
class SeStroke;
///
/// \brief The SeMark class
/// A "Mark" specifies a geometric shape and applies coloring to it.
/// “Mark”指定几何形状并对其应用着色。
///
class SeMark : public Element
{
public:
    SeMark();
    enum TYPE{WELLKNOWNNAME,OTHER,NONETYPE};
    enum RESOURCETYPE{ONLINE,INLINE,NONERESOURCETYPE};
private:
    ///
    /// \brief _type 可为不选
    ///
    TYPE _type = NONETYPE;
    SeWellKnownName* _seWellKnownName = nullptr;
    ///
    /// \brief _resourceType 选其一
    ///
    RESOURCETYPE _resourceType = NONERESOURCETYPE;
    SeOnlineResource* _seOnlineResource = nullptr;
    SeInlineContent* _seInlineContent = nullptr;
    SeFormat* _seFormat = nullptr;
    SeMarkIndex* _seMarkIndex = nullptr;
    SeFill* _seFill = nullptr;
    SeStroke* _seStroke = nullptr;
};

#endif // SEMARK_H
