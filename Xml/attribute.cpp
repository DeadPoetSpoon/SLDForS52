#include "attribute.h"

Attribute::Attribute()
{

}
Attribute::Attribute(QString name,QString value)
{
    this->_attributeName = name;
    this->_attributeValue = value;
}
QString Attribute::attributeName() const
{
    return _attributeName;
}

void Attribute::setAttributeName(const QString &attributeName)
{
    _attributeName = attributeName;
}

QString Attribute::attributeValue() const
{
    return _attributeValue;
}

void Attribute::setAttributeValue(const QString &attributeValue)
{
    _attributeValue = attributeValue;
}
bool Attribute::isThis(QString name)
{
    if(name == _attributeName)
        return true;
    else
        return false;
}
