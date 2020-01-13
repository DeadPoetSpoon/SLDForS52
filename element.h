#ifndef ELEMENT_H
#define ELEMENT_H
#include <QMap>
class Element
{
public:
    Element();
    void addAttribute(QString k,QString v);
    void setText(QString text);
    QString getAttribute(QString k);
    QStringList getAttributeKeys();
    bool hasAttribute() const;
    bool hasText() const;
protected:
    QMap<QString,QString>attributes;
    QString text;
    bool _hasAttribute = false;
    bool _hasText = false;
};

#endif // ELEMENT_H
