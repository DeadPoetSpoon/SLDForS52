QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Gml/gmlfeaturecollection.cpp \
    Ogc/ogcexpression.cpp \
    Ogc/ogcfilter.cpp \
    Ogc/ogcpropertyname.cpp \
    Se/Attritubes/seuom.cpp \
    Se/Attritubes/seversion.cpp \
    Se/seanchorpoint.cpp \
    Se/sebasesymbolizer.cpp \
    Se/secolorreplacement.cpp \
    Se/secoveragename.cpp \
    Se/secoveragestyle.cpp \
    Se/sedescription.cpp \
    Se/sedisplacement.cpp \
    Se/seelsefilter.cpp \
    Se/seexternalgraphic.cpp \
    Se/sefeaturetypename.cpp \
    Se/sefeaturetypestyle.cpp \
    Se/sefill.cpp \
    Se/seformat.cpp \
    Se/segeometry.cpp \
    Se/segraphic.cpp \
    Se/seinlinecontent.cpp \
    Se/selegendgraphic.cpp \
    Se/selinesymbolizer.cpp \
    Se/semark.cpp \
    Se/semarkindex.cpp \
    Se/semaxscaledenominator.cpp \
    Se/seminscaledenominator.cpp \
    Se/sename.cpp \
    Se/seonlineresource.cpp \
    Se/seopacity.cpp \
    Se/separametervaluetype.cpp \
    Se/seperpendicularoffset.cpp \
    Se/serecode.cpp \
    Se/serotation.cpp \
    Se/serule.cpp \
    Se/sesemantictypeidentifier.cpp \
    Se/sesize.cpp \
    Se/sestroke.cpp \
    Se/sesymbolizer.cpp \
    Se/sewellknownname.cpp \
    Sld/sldcoverageconstraint.cpp \
    Sld/sldcoverageextent.cpp \
    Sld/sldextent.cpp \
    Sld/sldfeaturetypeconstraint.cpp \
    Sld/sldinlinefeature.cpp \
    Sld/sldisdefault.cpp \
    Sld/sldlayercoverageconstraints.cpp \
    Sld/sldlayerfeatureconstraints.cpp \
    Sld/sldnamedlayer.cpp \
    Sld/sldnamedstyle.cpp \
    Sld/sldrangeaxis.cpp \
    Sld/sldremoteows.cpp \
    Sld/sldservice.cpp \
    Sld/sldtimeperiod.cpp \
    Sld/slduserlayer.cpp \
    Sld/slduserstyle.cpp \
    Sld/sldusesldlibrary.cpp \
    Sld/sldvalue.cpp \
    Sld/styledlayerdescriptor.cpp \
    Xml/attribute.cpp \
    Xml/element.cpp \
    Xml/reader.cpp \
    main.cpp \
    mainwindow.cpp \

HEADERS += \
    Gml/gmlfeaturecollection.h \
    Ogc/ogcexpression.h \
    Ogc/ogcfilter.h \
    Ogc/ogcpropertyname.h \
    Se/Attritubes/seuom.h \
    Se/Attritubes/seversion.h \
    Se/seanchorpoint.h \
    Se/sebasesymbolizer.h \
    Se/secolorreplacement.h \
    Se/secoveragename.h \
    Se/secoveragestyle.h \
    Se/sedescription.h \
    Se/sedisplacement.h \
    Se/seelsefilter.h \
    Se/seexternalgraphic.h \
    Se/sefeaturetypename.h \
    Se/sefeaturetypestyle.h \
    Se/sefill.h \
    Se/seformat.h \
    Se/segeometry.h \
    Se/segraphic.h \
    Se/seinlinecontent.h \
    Se/selegendgraphic.h \
    Se/selinesymbolizer.h \
    Se/semark.h \
    Se/semarkindex.h \
    Se/semaxscaledenominator.h \
    Se/seminscaledenominator.h \
    Se/sename.h \
    Se/seonlineresource.h \
    Se/seopacity.h \
    Se/separametervaluetype.h \
    Se/seperpendicularoffset.h \
    Se/serecode.h \
    Se/serotation.h \
    Se/serule.h \
    Se/sesemantictypeidentifier.h \
    Se/sesize.h \
    Se/sestroke.h \
    Se/sesymbolizer.h \
    Se/sewellknownname.h \
    Sld/sldcoverageconstraint.h \
    Sld/sldcoverageextent.h \
    Sld/sldextent.h \
    Sld/sldfeaturetypeconstraint.h \
    Sld/sldinlinefeature.h \
    Sld/sldisdefault.h \
    Sld/sldlayercoverageconstraints.h \
    Sld/sldlayerfeatureconstraints.h \
    Sld/sldnamedlayer.h \
    Sld/sldnamedstyle.h \
    Sld/sldrangeaxis.h \
    Sld/sldremoteows.h \
    Sld/sldservice.h \
    Sld/sldtimeperiod.h \
    Sld/slduserlayer.h \
    Sld/slduserstyle.h \
    Sld/sldusesldlibrary.h \
    Sld/sldvalue.h \
    Sld/styledlayerdescriptor.h \
    Xml/attribute.h \
    Xml/element.h \
    Xml/reader.h \
    mainwindow.h \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
