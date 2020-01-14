#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include <QString>

class Attribute
{
public:
    Attribute();
    Attribute(QString name,QString value);
    QString attributeName() const;
    void setAttributeName(const QString &attributeName);

    QString attributeValue() const;
    void setAttributeValue(const QString &attributeValue);

    bool isThis(QString name);

private:
    QString _attributeName;
    QString _attributeValue;
};

#endif // ATTRIBUTE_H
