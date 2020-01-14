#ifndef SLDNAMEDLAYER_H
#define SLDNAMEDLAYER_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
#include "Sld/sldlayerfeatureconstraints.h"
#include "Sld/sldnamedstyle.h"
#include "Sld/slduserstyle.h"
class SldNamedLayer:public Element
{
public:
    SldNamedLayer();
    enum STYLETYPE{NAMED,USER};
private:
    ///
    /// \brief se_Name 必有元素;
    ///
    SeName* se_Name = nullptr;
    SeDescription* se_Description = nullptr;
    SldLayerFeatureConstraints* sld_LayerFeatureConstraints = nullptr;
    STYLETYPE _styleType = NAMED;
    QList<SldNamedStyle*> sld_NamedStyles;
    QList<SldUserStyle*> sld_UserStyle;
};

#endif // SLDNAMEDLAYER_H
