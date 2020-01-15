#ifndef SEFEATURETYPESTYLE_H
#define SEFEATURETYPESTYLE_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Se/Common/sefeaturetypename.h"
#include "Se/FeatureStyle/sesemantictypeidentifier.h"
#include "Se/FeatureStyle/serule.h"
#include "Se/Common/seonlineresource.h"
#include "Se/Attritubes/seversion.h"
///
/// \brief The SeFeatureTypeStyle class
/// A FeatureTypeStyle contains styling information specific to one feature type.
/// FeatureTypeStyle包含特定于某个功能类型的样式信息。
///
class SeFeatureTypeStyle:public Element
{
public:
    SeFeatureTypeStyle();
//    enum STYLETYPE{RULE,ONLINERESOURCE};
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SeFeatureTypeName* _seFeatureTypeName = nullptr;
    QList<SeSemanticTypeIdentifier*> _seSemanticTypeIdentifiers;
//    STYLETYPE _styleType = RULE;
    ///
    /// \brief _seRules 一个或多个;
    ///
    QList<SeRule*> _seRules;
    ///
    /// \brief _seOnlineResources 一个或多个;
    ///
    QList<SeOnlineResource*> _seOnlineResources;
    ///
    /// \brief _seVersion 必有属性version;
    ///
    SeVersion* _seVersion = nullptr;
};

#endif // SEFEATURETYPESTYLE_H
