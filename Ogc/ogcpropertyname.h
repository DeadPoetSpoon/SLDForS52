#ifndef OGCPROPERTYNAME_H
#define OGCPROPERTYNAME_H
#include "Xml/element.h"
///
/// \brief The OgcPropertyName class
/// string value
/// 性质名字
///
class OgcPropertyName : public Element
{
public:
    OgcPropertyName();
private:
    ///
    /// \brief _propertyName 必要元素
    ///
    QString _propertyName;
};

#endif // OGCPROPERTYNAME_H
