#ifndef SESEMANTICTYPEIDENTIFIER_H
#define SESEMANTICTYPEIDENTIFIER_H
#include "Xml/element.h"
///
/// \brief The SeSemanticTypeIdentifier class
/// string value
/// 语义类型标识符
///
class SeSemanticTypeIdentifier : public Element
{
public:
    SeSemanticTypeIdentifier();
private:
    QString _semanticTypeIdentifier;
};

#endif // SESEMANTICTYPEIDENTIFIER_H
