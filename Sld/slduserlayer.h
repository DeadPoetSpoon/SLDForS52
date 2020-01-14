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
    enum REMOTEORINLINE{REMOTEOWS,INLINEFEATURE,NONEREMOTEORINLINE};
    enum CONSTRAINTSTYPE{LFCS,LCCS,NONECONSTRAINTSTYPE};
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    REMOTEORINLINE _remotrOrinline = NONEREMOTEORINLINE;
    CONSTRAINTSTYPE _constraints = NONECONSTRAINTSTYPE;
    SldRemoteOWS* _sldRemoteOWS = nullptr;
    SldInlineFeature* _sldInlineFeature = nullptr;
    SldLayerFeatureConstraints* _sldLayerFeatureConstraints = nullptr;
    SldLayerCoverageConstraints* _sldLayerCoverageConstraints = nullptr;
    ///
    /// \brief _sldUserStyles 必有元素;
    ///
    QList<SldUserStyle*> _sldUserStyles;
};

#endif // SLDUSERLAYER_H
