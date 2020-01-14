#ifndef SESEMANTICTYPEIDENTIFIER_H
#define SESEMANTICTYPEIDENTIFIER_H
#include "Xml/element.h"

class SeSemanticTypeIdentifier : public Element
{
public:
    SeSemanticTypeIdentifier();
private:
    QString _semanticTypeIdentifier;
};

#endif // SESEMANTICTYPEIDENTIFIER_H
