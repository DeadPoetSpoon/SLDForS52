#ifndef OGCEXPRESSION_H
#define OGCEXPRESSION_H
#include "Xml/element.h"

class OgcExpression : public Element
{
public:
    OgcExpression();
private:
    ///
    /// \brief _propertyName 必要元素
    ///
    QString _expression;
};

#endif // OGCEXPRESSION_H
