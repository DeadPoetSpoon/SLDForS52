#ifndef SETITLE_H
#define SETITLE_H
#include "Xml/element.h"
///
/// \brief The SeTitle class
/// string value
/// 标题
///
class SeTitle : public Element
{
public:
    SeTitle();
private:
    QString _title;
};

#endif // SETITLE_H
