#ifndef SEMAPITEM_H
#define SEMAPITEM_H
#include "Ogc/Expr/ogcexpression.h"
#include "Se/Symbolizer/sedata.h"
#include "Se/Symbolizer/sevalue.h"
///
/// \brief The SeMapItem class
/// MapItem
///
class SeMapItem:public OgcExpression
{
public:
    SeMapItem();
private:
    ///
    /// \brief _seData 必有元素;
    ///
    SeData* _seData = nullptr;
    ///
    /// \brief _seValue 必有元素;
    ///
    SeValue* _seValue = nullptr;
};

#endif // SEMAPITEM_H
