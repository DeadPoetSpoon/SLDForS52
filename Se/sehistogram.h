#ifndef SEHISTOGRAM_H
#define SEHISTOGRAM_H
#include "Xml/element.h"

class SeHistogram : public Element
{
public:
    SeHistogram();
private:
    QString _histogram;
};

#endif // SEHISTOGRAM_H
