#ifndef SEFUNCTION_H
#define SEFUNCTION_H
//#include "Xml/element.h"
#include "Se/Attritubes/sefallbackvalue.h"
#include "Ogc/Expr/ogcexpression.h"
///
/// \brief The SeFunction class
/// 函数基类
///
class SeFunction : public OgcExpression
{
public:
    SeFunction();
protected:
    ///
    /// \brief _seFallbackValue 必要属性;
    ///
    SeFallbackValue* _seFallbackValue = nullptr;
};

#endif // SEFUNCTION_H
