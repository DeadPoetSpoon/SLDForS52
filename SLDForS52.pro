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
    Se/seanchorpointx.cpp \
    Se/seanchorpointy.cpp \
    Se/sebasesymbolizer.cpp \
    Se/sebluechannel.cpp \
    Se/secategorize.cpp \
    Se/sechannelselection.cpp \
    Se/secolormap.cpp \
    Se/secolorreplacement.cpp \
    Se/secontrastenhancement.cpp \
    Se/secoveragename.cpp \
    Se/secoveragestyle.cpp \
    Se/sedescription.cpp \
    Se/sedisplacement.cpp \
    Se/sedisplacementx.cpp \
    Se/sedisplacementy.cpp \
    Se/seelsefilter.cpp \
    Se/seexternalgraphic.cpp \
    Se/sefeaturetypename.cpp \
    Se/sefeaturetypestyle.cpp \
    Se/sefill.cpp \
    Se/sefont.cpp \
    Se/seformat.cpp \
    Se/segammavalue.cpp \
    Se/segap.cpp \
    Se/segeneralizeline.cpp \
    Se/segeometry.cpp \
    Se/segraphic.cpp \
    Se/segraphicfill.cpp \
    Se/segraphicstroke.cpp \
    Se/segraychannel.cpp \
    Se/segreenchannel.cpp \
    Se/sehalo.cpp \
    Se/sehistogram.cpp \
    Se/seimageoutline.cpp \
    Se/seinitialgap.cpp \
    Se/seinlinecontent.cpp \
    Se/seinterpolate.cpp \
    Se/seisaligned.cpp \
    Se/seisrepeated.cpp \
    Se/selabel.cpp \
    Se/selabelplacement.cpp \
    Se/selegendgraphic.cpp \
    Se/selineplacement.cpp \
    Se/selinesymbolizer.cpp \
    Se/semark.cpp \
    Se/semarkindex.cpp \
    Se/semaxscaledenominator.cpp \
    Se/seminscaledenominator.cpp \
    Se/sename.cpp \
    Se/senormalize.cpp \
    Se/seonlineresource.cpp \
    Se/seopacity.cpp \
    Se/seoverlapbehavior.cpp \
    Se/separametervaluetype.cpp \
    Se/seperpendicularoffset.cpp \
    Se/sepointplacement.cpp \
    Se/sepointsymbolizer.cpp \
    Se/sepolygonsymbolizer.cpp \
    Se/seradius.cpp \
    Se/serastersymbolizer.cpp \
    Se/serecode.cpp \
    Se/seredchannel.cpp \
    Se/serotation.cpp \
    Se/serule.cpp \
    Se/sesemantictypeidentifier.cpp \
    Se/seshadedrelief.cpp \
    Se/sesize.cpp \
    Se/sesourcechannelname.cpp \
    Se/sestroke.cpp \
    Se/sesvgparameter.cpp \
    Se/sesymbolizer.cpp \
    Se/setextsymbolizer.cpp \
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
    Se/seanchorpointx.h \
    Se/seanchorpointy.h \
    Se/sebasesymbolizer.h \
    Se/sebluechannel.h \
    Se/secategorize.h \
    Se/sechannelselection.h \
    Se/secolormap.h \
    Se/secolorreplacement.h \
    Se/secontrastenhancement.h \
    Se/secoveragename.h \
    Se/secoveragestyle.h \
    Se/sedescription.h \
    Se/sedisplacement.h \
    Se/sedisplacementx.h \
    Se/sedisplacementy.h \
    Se/seelsefilter.h \
    Se/seexternalgraphic.h \
    Se/sefeaturetypename.h \
    Se/sefeaturetypestyle.h \
    Se/sefill.h \
    Se/sefont.h \
    Se/seformat.h \
    Se/segammavalue.h \
    Se/segap.h \
    Se/segeneralizeline.h \
    Se/segeometry.h \
    Se/segraphic.h \
    Se/segraphicfill.h \
    Se/segraphicstroke.h \
    Se/segraychannel.h \
    Se/segreenchannel.h \
    Se/sehalo.h \
    Se/sehistogram.h \
    Se/seimageoutline.h \
    Se/seinitialgap.h \
    Se/seinlinecontent.h \
    Se/seinterpolate.h \
    Se/seisaligned.h \
    Se/seisrepeated.h \
    Se/selabel.h \
    Se/selabelplacement.h \
    Se/selegendgraphic.h \
    Se/selineplacement.h \
    Se/selinesymbolizer.h \
    Se/semark.h \
    Se/semarkindex.h \
    Se/semaxscaledenominator.h \
    Se/seminscaledenominator.h \
    Se/sename.h \
    Se/senormalize.h \
    Se/seonlineresource.h \
    Se/seopacity.h \
    Se/seoverlapbehavior.h \
    Se/separametervaluetype.h \
    Se/seperpendicularoffset.h \
    Se/sepointplacement.h \
    Se/sepointsymbolizer.h \
    Se/sepolygonsymbolizer.h \
    Se/seradius.h \
    Se/serastersymbolizer.h \
    Se/serecode.h \
    Se/seredchannel.h \
    Se/serotation.h \
    Se/serule.h \
    Se/sesemantictypeidentifier.h \
    Se/seshadedrelief.h \
    Se/sesize.h \
    Se/sesourcechannelname.h \
    Se/sestroke.h \
    Se/sesvgparameter.h \
    Se/sesymbolizer.h \
    Se/setextsymbolizer.h \
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
