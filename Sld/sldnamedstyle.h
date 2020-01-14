#ifndef SLDNAMEDSTYLE_H
#define SLDNAMEDSTYLE_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
class SldNamedStyle:public Element
{
public:
    SldNamedStyle();
private:
    ///
    /// \brief se_Name 必要元素;
    ///
    SeName* se_Name = nullptr;
    SeDescription* se_Description = nullptr;
};

#endif // SLDNAMEDSTYLE_H
