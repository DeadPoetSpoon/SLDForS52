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
    enum USERSTYLETYPE{FEARURETYPESTYLE,COVERAGESTYLE,ONLINERESOURCE};
private:
    SeName* se_Name = nullptr;
    SeDescription* se_Description = nullptr;
    SldIsDefault* sld_IsDefault = nullptr;
    ///
    /// \brief type 三者必选其一;
    ///
    USERSTYLETYPE type = FEARURETYPESTYLE;
    SeFeatureTypeStyle* se_FeatureTypeStyle = nullptr;
    SeCoverageStyle* se_CoverageStyle = nullptr;
    SeOnlineResource* se_OnlineResource = nullptr;
};

#endif // SLDUSERSTYLE_H
