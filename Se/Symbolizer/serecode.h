#ifndef SERECODE_H
#define SERECODE_H
//#include "Xml/element.h"
#include "Se/Symbolizer/sefunction.h"
#include "Se/Symbolizer/selookupvalue.h"
#include "Se/Symbolizer/semapitem.h"
///
/// \brief The SeRecode class
/// Transformation of discrete values to other values
/// 将离散值转换为其他值
///
class SeRecode : public SeFunction
{
public:
    SeRecode();
private:
    ///
    /// \brief _seLookupValue 必要元素
    ///
    SeLookupValue* _seLookupValue = nullptr;
    ///
    /// \brief _seMapItems 至少一个;
    ///
    QList<SeMapItem*> _seMapItems;
};

#endif // SERECODE_H
