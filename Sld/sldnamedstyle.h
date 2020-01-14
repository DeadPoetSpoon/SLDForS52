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
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
};

#endif // SLDNAMEDSTYLE_H
