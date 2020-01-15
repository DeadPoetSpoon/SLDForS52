#ifndef SLDNAMEDLAYER_H
#define SLDNAMEDLAYER_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Sld/sldlayerfeatureconstraints.h"
#include "Sld/sldnamedstyle.h"
#include "Sld/slduserstyle.h"
///
/// \brief The SldNamedLayer class
/// A NamedLayer is a layer of data that has a name advertised by a WMS.
/// NamedLayer是一层数据，它的名称由WMS发布。
///
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
