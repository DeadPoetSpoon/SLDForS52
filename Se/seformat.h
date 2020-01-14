#ifndef SEFORMAT_H
#define SEFORMAT_H
#include "Xml/element.h"

class SeFormat : public Element
{
public:
    SeFormat();
private:
    QString _format;
};

#endif // SEFORMAT_H
