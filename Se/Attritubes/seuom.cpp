#include "seuom.h"

SeUom::SeUom()
{
    this->_attributeName = "uom";
}
SeUom::SeUom(QString uri)
{
    this->_attributeName = "uom";
    this->_attributeValue = uri;
}
void SeUom::setUri(QString uri)
{
    this->_attributeValue = uri;
}
QString SeUom::getUri()
{
    return this->attributeValue();
}
