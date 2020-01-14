#include "Xml/element.h"

Element::Element()
{

}
void Element::addAttribute(Attribute* attr)
{
    _attributes.append(attr);
    _hasAttribute = true;
}
void Element::addAttribute(QString name, QString value)
{
    _attributes.append(new Attribute(name,value));
}
QString Element::getAttribute(QString k)
{
    foreach (Attribute* attr, _attributes) {
        if(attr->isThis(k))
            return attr->attributeValue();
    }
    return "NULL";
}
QStringList Element::getAttributeKeys()
{
    QStringList a;
    foreach (Attribute* attr, _attributes) {
        a.append(attr->attributeName());
    }
    return a;
}

bool Element::hasAttribute() const
{
    return _hasAttribute;
}

bool Element::hasText() const
{
    return _hasText;
}

QString Element::getText() const
{
    return _text;
}
void Element::setText(QString t)
{
    this->_text = t;
    _hasText = true;
}
