#ifndef SECATEGORIZE_H
#define SECATEGORIZE_H
#include "Se/Symbolizer/sefunction.h"
#include "Se/Symbolizer/selookupvalue.h"
#include "Se/Symbolizer/sevalue.h"
#include "Se/Symbolizer/sethreshold.h"
#include "Se/Attritubes/sethreshholdsbelongto.h"
///
/// \brief The SeCategorize class
/// The transformation of continuous values to distinct values.
/// 把连续的值转换成不同的值。
///
class SeCategorize : public SeFunction
{
public:
    SeCategorize();
private:
    ///
    /// \brief _seLookupValue 必有元素;
    ///
    SeLookupValue* _seLookupValue = nullptr;
    ///
    /// \brief _seValue 必有元素;
    ///
    SeValue* _seValue = nullptr;
    ///
    /// \brief _seThresholds 成对出现;
    ///
    QList<SeThreshold*> _seThresholds;
    ///
    /// \brief _seValues 成对出现;
    ///
    QList<SeValue*> _seValues;
    ///
    /// \brief _seThreshholdsBelongTo 必有属性;
    ///
    SeThreshholdsBelongTo* _seThreshholdsBelongTo = nullptr;
};

#endif // SECATEGORIZE_H
