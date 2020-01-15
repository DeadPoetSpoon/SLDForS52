#ifndef SECOLORREPLACEMENT_H
#define SECOLORREPLACEMENT_H
#include "Xml/element.h"
#include "Se/Symbolizer/serecode.h"
///
/// \brief The SeColorReplacement class
/// 颜色替代
///
class SeColorReplacement : public Element
{
public:
    SeColorReplacement();
private:
    SeRecode* _seRecode = nullptr;
};

#endif // SECOLORREPLACEMENT_H
