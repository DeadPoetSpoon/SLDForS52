#ifndef ELEMENT_H
#define ELEMENT_H
#include <QList>
#include "attribute.h"
class Element
{
public:
    Element();
    void addAttribute(Attribute* attr);
    void addAttribute(QString name,QString value);
    void setText(QString text);
    QString getAttribute(QString k);
    QStringList getAttributeKeys();
    bool hasAttribute() const;
    bool hasText() const;
protected:
    QList<Attribute*>attributes;
    QString text;
    bool _hasAttribute = false;
    bool _hasText = false;
};

#endif // ELEMENT_H
