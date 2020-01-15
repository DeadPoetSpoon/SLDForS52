#ifndef SLDUSERSTYLE_H
#define SLDUSERSTYLE_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Sld/sldisdefault.h"
#include "Se/FeatureStyle/sefeaturetypestyle.h"
#include "Se/FeatureStyle/secoveragestyle.h"
#include "Se/Common/seonlineresource.h"
///
/// \brief The SldUserStyle class
/// A UserStyle allows user-defined styling and is semantically equivalent to a
/// WMS named style. External FeatureTypeStyles or CoverageStyles can be linked using an OnlineResource-element
/// UserStyle允许用户定义样式，在语义上等同于WMS命名样式。外部功能类型样式或CoverageStyles可以使用一个在线资源元素进行链接
///
class SldUserStyle:public Element
{
public:
    SldUserStyle();
    enum USERSTYLETYPE{FEARURETYPESTYLE,COVERAGESTYLE,ONLINERESOURCE,NONEUSERSTYLETYPE};
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SldIsDefault* _sldIsDefault = nullptr;
    ///
    /// \brief type 三者必选其一;
    ///
    USERSTYLETYPE type = NONEUSERSTYLETYPE;
    SeFeatureTypeStyle* _seFeatureTypeStyle = nullptr;
    SeCoverageStyle* _seCoverageStyle = nullptr;
    SeOnlineResource* _seOnlineResource = nullptr;
};

#endif // SLDUSERSTYLE_H
