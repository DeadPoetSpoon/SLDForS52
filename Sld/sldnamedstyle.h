#ifndef SLDNAMEDSTYLE_H
#define SLDNAMEDSTYLE_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
///
/// \brief The SldNamedStyle class
/// A NamedStyle is used to refer to a style that has a name in a WMS.
/// NamedStyle用于引用WMS中有名称的样式。
///
class SldNamedStyle:public Element
{
public:
    SldNamedStyle();
private:
    ///
    /// \brief se_Name 必要元素;
    ///
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
};

#endif // SLDNAMEDSTYLE_H
