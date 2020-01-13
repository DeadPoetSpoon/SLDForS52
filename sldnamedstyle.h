#ifndef SLDNAMEDSTYLE_H
#define SLDNAMEDSTYLE_H
#include "element.h"
#include "sename.h"
#include "sedescription.h"
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
