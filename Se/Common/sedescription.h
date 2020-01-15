#ifndef SEDESCRIPTION_H
#define SEDESCRIPTION_H
#include "Xml/element.h"
#include "Se/Common/setitle.h"
#include "Se/Common/seabstract.h"
///
/// \brief The SeDescription class
/// A "Description" gives human-readable descriptive information for the object it is included within.
/// “描述”为包含它的对象提供人类可读的描述信息。
///
class SeDescription:public Element
{
public:
    SeDescription();
private:
    SeTitle* _seTitle = nullptr;
    SeAbstract* _seAbstract = nullptr;
};

#endif // SEDESCRIPTION_H
