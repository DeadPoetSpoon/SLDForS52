#ifndef SENORMALIZE_H
#define SENORMALIZE_H
#include "Xml/element.h"

class SeNormalize : public Element
{
public:
    SeNormalize();
private:
    QString _normalize;
};

#endif // SENORMALIZE_H
