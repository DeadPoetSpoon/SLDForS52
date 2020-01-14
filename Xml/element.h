#ifndef ELEMENT_H
#define ELEMENT_H
#include <QList>
#include "attribute.h"
///
/// \brief The Element class
/// Xml元素基类。
///
class Element
{
public:
    Element();
    void addAttribute(Attribute* attr);
    void addAttribute(QString name,QString value);
    void setText(QString _text);
    QString getAttribute(QString k);
    QStringList getAttributeKeys();
    bool hasAttribute() const;
    bool hasText() const;
    QString getText() const;

protected:
    QList<Attribute*>_attributes;
    QString _text;
    bool _hasAttribute = false;
    bool _hasText = false;
};

#endif // ELEMENT_H
