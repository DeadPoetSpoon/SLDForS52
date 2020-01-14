#ifndef SLDUSERSTYLE_H
#define SLDUSERSTYLE_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
#include "Sld/sldisdefault.h"
#include "Se/sefeaturetypestyle.h"
#include "Se/secoveragestyle.h"
#include "Se/seonlineresource.h"
class SldUserStyle:public Element
{
public:
    SldUserStyle();
    enum USERSTYLETYPE{FEARURETYPESTYLE,COVERAGESTYLE,ONLINERESOURCE,NONEUSERSTYLETYPE};
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SldIsDefault* _sldIsDefault = nullptr;
    ///
    /// \brief type 三者必选其一;
    ///
    USERSTYLETYPE type = NONEUSERSTYLETYPE;
    SeFeatureTypeStyle* _seFeatureTypeStyle = nullptr;
    SeCoverageStyle* _seCoverageStyle = nullptr;
    SeOnlineResource* _seOnlineResource = nullptr;
};

#endif // SLDUSERSTYLE_H
