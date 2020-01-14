#ifndef SLDUSERSTYLE_H
#define SLDUSERSTYLE_H
#include "element.h"
#include "sename.h"
#include "sedescription.h"
#include "sldisdefault.h"
#include "sefeaturetypestyle.h"
#include "secoveragestyle.h"
#include "seonlineresource.h"
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
