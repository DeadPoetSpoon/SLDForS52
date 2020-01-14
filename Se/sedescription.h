#ifndef SEDESCRIPTION_H
#define SEDESCRIPTION_H
#include "Xml/element.h"

class SeDescription:public Element
{
public:
    SeDescription();
private:
    QString _title;
    QString _abstract;
};

#endif // SEDESCRIPTION_H
