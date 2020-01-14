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
    enum LAYERTYPE{NAMED,USER,NONELAYERTYPE};
private:
    SeName* _seName =  nullptr;
    SeDescription* _seDescription = nullptr;
    QList<SldUseSLDLibrary*> _sldUseSLDLibrarys;
    QList<SldNamedLayer*> _sldNamedLayers;
    QList<SldUserLayer*> _sldUserLayers;
    LAYERTYPE _LayerType = NONELAYERTYPE;
    //必有属性version尚未添加。
};

#endif // STYLEDLAYERDESCRIPTOR_H
