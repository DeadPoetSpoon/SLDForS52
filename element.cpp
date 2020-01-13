#include "element.h"

Element::Element()
{

}
void Element::addAttribute(QString k, QString v)
{
    attributes.insert(k,v);
    _hasAttribute = true;
}
QString Element::getAttribute(QString k)
{
    return attributes.value(k);
}
QStringList Element::getAttributeKeys()
{
    return attributes.keys();
}

bool Element::hasAttribute() const
{
    return _hasAttribute;
}

bool Element::hasText() const
{
    return _hasText;
}
void Element::setText(QString t)
{
    this->text = t;
    _hasText = true;
}
