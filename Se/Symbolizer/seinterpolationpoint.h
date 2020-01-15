#ifndef SEINTERPOLATIONPOINT_H
#define SEINTERPOLATIONPOINT_H
//#include "Xml/element.h"
#include "Ogc/Expr/ogcexpression.h"
#include "Se/Symbolizer/sedata.h"
#include "Se/Symbolizer/sevalue.h"
///
/// \brief The SeInterpolationPoint class
/// 插补点
///
class SeInterpolationPoint : public OgcExpression
{
public:
    SeInterpolationPoint();
private:
    SeData* _seData = nullptr;
    SeValue* _seValue = nullptr;
};

#endif // SEINTERPOLATIONPOINT_H
