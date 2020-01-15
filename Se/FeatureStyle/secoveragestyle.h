#ifndef SECOVERAGESTYLE_H
#define SECOVERAGESTYLE_H
#include "Xml/element.h"
#include "Se/Common/sename.h"
#include "Se/Common/sedescription.h"
#include "Se/Common/secoveragename.h"
#include "Se/FeatureStyle/sesemantictypeidentifier.h"
#include "Se/FeatureStyle/serule.h"
#include "Se/Common/seonlineresource.h"
#include "Se/Attritubes/seversion.h"
///
/// \brief The SeCoverageStyle class
/// A CoverageStyle contains styling information specific to one Coverage offering.
/// CoverageStyle包含特定于一个覆盖产品的样式信息。
///
class SeCoverageStyle:public Element
{
public:
    SeCoverageStyle();
private:
    SeName* _seName = nullptr;
    SeDescription* _seDescription = nullptr;
    SeCoverageName* _seCoverageName = nullptr;
    QList<SeSemanticTypeIdentifier*> _seSemanticTypeIdentifiers;
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

#endif // SECOVERAGESTYLE_H
