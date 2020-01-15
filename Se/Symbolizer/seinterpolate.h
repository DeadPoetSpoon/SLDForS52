#ifndef SEINTERPOLATE_H
#define SEINTERPOLATE_H
#include "Se/Symbolizer/sefunction.h"
#include "Se/Symbolizer/selookupvalue.h"
#include "Se/Symbolizer/seinterpolationpoint.h"
#include "Se/Attritubes/semode.h"
#include "Se/Attritubes/semethod.h"
///
/// \brief The SeInterpolate class
/// The transformation of continuous values to a number of values.
/// 将连续值转换为多个值。
///
class SeInterpolate : public SeFunction
{
public:
    SeInterpolate();
private:
    ///
    /// \brief _seLookupValue 必有元素;
    ///
    SeLookupValue* _seLookupValue = nullptr;
    ///
    /// \brief _seInterpolationPoint 至少有一个;
    ///
    QList<SeInterpolationPoint*> _seInterpolationPoint;
    ///
    /// \brief _seMode 必有属性;
    ///
    SeMode* _seMode = nullptr;
    ///
    /// \brief _seMethod 必有属性;
    ///
    SeMethod* _seMethod = nullptr;
};

#endif // SEINTERPOLATE_H
