#ifndef SEABSTRACT_H
#define SEABSTRACT_H
#include "Xml/element.h"
///
/// \brief The SeAbstract class
/// string value
/// 摘要
///
class SeAbstract : public Element
{
public:
    SeAbstract();
private:
    QString _abstract;
};

#endif // SEABSTRACT_H
