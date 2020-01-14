#ifndef SLDUSERLAYER_H
#define SLDUSERLAYER_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
#include "Sld/sldremoteows.h"
#include "Sld/sldinlinefeature.h"
#include "Sld/sldlayerfeatureconstraints.h"
#include "Sld/sldlayercoverageconstraints.h"
#include "Sld/slduserstyle.h"
class SldUserLayer:public Element
{
public:
    SldUserLayer();
    enum REMOTEORINLINE{REMOTEOWS,INLINEFEATURE};
    enum CONSTRAINTSTYPE{LFCS,LCCS};
private:
    SeName* se_Name = nullptr;
    SeDescription* se_Description = nullptr;
    REMOTEORINLINE _remotrOrinline = INLINEFEATURE;
    CONSTRAINTSTYPE _constraints = LFCS;
    SldRemoteOWS* sld_RemoteOWS = nullptr;
    SldInlineFeature* sld_InlineFeature = nullptr;
    SldLayerFeatureConstraints* sld_LayerFeatureConstraints = nullptr;
    SldLayerCoverageConstraints* sld_LayerCoverageConstraints = nullptr;
    ///
    /// \brief sld_UserStyles 必有元素;
    ///
    QList<SldUserStyle*> sld_UserStyles;
};

#endif // SLDUSERLAYER_H
