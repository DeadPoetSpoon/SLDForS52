#ifndef SLDINLINEFEATURE_H
#define SLDINLINEFEATURE_H
#include "Xml/element.h"
#include "Gml/gmlfeaturecollection.h"
class SldInlineFeature:public Element
{
public:
    SldInlineFeature();
private:
    ///
    /// \brief gml_FeatureCollections 必有元素;
    ///
    QList<GmlFeatureCollection*> gml_FeatureCollections;
};

#endif // SLDINLINEFEATURE_H
