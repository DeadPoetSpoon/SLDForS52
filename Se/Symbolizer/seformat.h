#ifndef SEFORMAT_H
#define SEFORMAT_H
#include "Xml/element.h"
///
/// \brief The SeFormat class
/// string value
/// 格式
///
class SeFormat : public Element
{
public:
    SeFormat();
private:
    QString _format;
};

#endif // SEFORMAT_H
