#ifndef SECOVERAGENAME_H
#define SECOVERAGENAME_H
#include "Xml/element.h"
///
/// \brief The SeCoverageName class
/// string value
/// 范围名
///
class SeCoverageName:public Element
{
public:
    SeCoverageName();
private:
    QString _coverageName;
};

#endif // SECOVERAGENAME_H
