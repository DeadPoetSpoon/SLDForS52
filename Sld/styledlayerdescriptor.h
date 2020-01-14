#ifndef STYLEDLAYERDESCRIPTOR_H
#define STYLEDLAYERDESCRIPTOR_H
#include <QList>
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
#include "Sld/sldusesldlibrary.h"
#include "Sld/sldnamedlayer.h"
#include "Sld/slduserlayer.h"
class StyledLayerDescriptor:public Element
{
public:
    StyledLayerDescriptor();
    enum LAYERTYPE{NAMED,USER};
private:
    SeName* se_Name =  nullptr;
    SeDescription* se_Description = nullptr;
    QList<SldUseSLDLibrary*> sld_UseSLDLibrarys;
    QList<SldNamedLayer*> sld_NamedLayers;
    QList<SldUserLayer*> sld_UserLayers;
    LAYERTYPE _LayerType = NAMED;
    //必有属性version尚未添加。
};

#endif // STYLEDLAYERDESCRIPTOR_H
