#ifndef STYLEDLAYERDESCRIPTOR_H
#define STYLEDLAYERDESCRIPTOR_H
//#include <QList>
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Sld/sldusesldlibrary.h"
#include "Sld/sldnamedlayer.h"
#include "Sld/slduserlayer.h"
#include "Se/Attritubes/seversion.h"
///
/// \brief The StyledLayerDescriptor class
/// A StyledLayerDescriptor is a sequence of styled layers, represented at the first level by NamedLayer and UserLayer elements.
/// StyledLayerDescriptor是一系列样式化的层，在第一层由NamedLayer和UserLayer元素表示。
///

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
    //必有属性version尚未添加。已添加
    ///
    /// \brief _seVersion 必有属性
    ///
    SeVersion* _seVersion = nullptr;
};

#endif // STYLEDLAYERDESCRIPTOR_H
