#ifndef SLDUSERLAYER_H
#define SLDUSERLAYER_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Sld/sldremoteows.h"
#include "Sld/sldinlinefeature.h"
#include "Sld/sldlayerfeatureconstraints.h"
#include "Sld/sldlayercoverageconstraints.h"
#include "Sld/slduserstyle.h"
///
/// \brief The SldUserLayer class
/// A UserLayer allows a user-defined layer to be built from WFS and WCS data.
/// 用户层允许从WFS和WCS数据构建用户定义的层。
///
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
