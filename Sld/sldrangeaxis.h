#ifndef SLDRANGEAXIS_H
#define SLDRANGEAXIS_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Sld/sldvalue.h"
///
/// \brief The SldRangeAxis class
/// A RangeAxis describes the range selection for a coverage.
/// RangeAxis描述覆盖范围的范围选择。
///
class SldRangeAxis:public Element
{
public:
    SldRangeAxis();
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

#endif // SLDRANGEAXIS_H
