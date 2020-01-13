#ifndef STYLEDLAYERDESCRIPTOR_H
#define STYLEDLAYERDESCRIPTOR_H
#include <QList>
#include "element.h"
#include "sename.h"
#include "sedescription.h"
#include "sldusesldlibrary.h"
#include "sldnamedlayer.h"
#include "slduserlayer.h"
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
