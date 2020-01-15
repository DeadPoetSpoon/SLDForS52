#ifndef SLDEXTENT_H
#define SLDEXTENT_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Sld/sldvalue.h"
///
/// \brief The SldExtent class
/// An Extent gives feature/coverage/raster/matrix dimension extent.
/// Extent给出特征/覆盖/栅格/矩阵尺寸范围。
///
class SldExtent:public Element
{
public:
    SldExtent();
private:
    ///
    /// \brief _seName 必要元素;
    ///
    SeName* _seName = nullptr;
    ///
    /// \brief _sldValue 必要元素;
    ///
    SldValue* _sldValue = nullptr;
};

#endif // SLDEXTENT_H
