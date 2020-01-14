#ifndef SECOLORREPLACEMENT_H
#define SECOLORREPLACEMENT_H
#include "Xml/element.h"
#include "Se/serecode.h"
class SeColorReplacement : public Element
{
public:
    SeColorReplacement();
private:
    SeRecode* _seRecode = nullptr;
};

#endif // SECOLORREPLACEMENT_H
