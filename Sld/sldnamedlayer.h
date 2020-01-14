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
    enum STYLETYPE{NAMED,USER,NONESTYLETYPE};
private:
    ///
    /// \brief se_Name 必有元素;
    ///
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SldLayerFeatureConstraints* _sldLayerFeatureConstraints = nullptr;
    STYLETYPE _styleType = NONESTYLETYPE;
    QList<SldNamedStyle*> _sldNamedStyles;
    QList<SldUserStyle*> _sldUserStyle;
};

#endif // SLDNAMEDLAYER_H
