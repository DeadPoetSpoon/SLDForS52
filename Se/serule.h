#ifndef SERULE_H
#define SERULE_H
#include "Xml/element.h"
#include "Se/sename.h"
#include "Se/sedescription.h"
#include "Se/selegendgraphic.h"
#include "Ogc/ogcfilter.h"
#include "Se/seelsefilter.h"
#include "Se/seminscaledenominator.h"
#include "Se/semaxscaledenominator.h"
#include "Se/sesymbolizer.h"
///
/// \brief The SeRule class
/// A Rule is used to attach property/scale conditions to and group the individual symbols used for rendering.
/// Rule用于附加属性/缩放条件，并将用于呈现的单个符号分组。
///
class SeRule : public Element
{
public:
    SeRule();
    enum FILTERTYPE{OGC,SE};
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription;
    SeLegendGraphic* _seLegendGraphic;
    FILTERTYPE _filterType = OGC;
    //两者选一个
    OgcFilter* _ogcFilter;
    SeElseFilter* _seElseFilter;
    SeMinScaleDenominator* _seMinScaleDenominator;
    SeMaxScaleDenominator* _seMaxScaleDenominator;
    ///
    /// \brief _seSymbolizers 必有元素;
    ///
    QList<SeSymbolizer*> _seSymbolizers;
};

#endif // SERULE_H
