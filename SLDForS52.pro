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
    Ogc/Expr/ogcexpression.cpp \
    Ogc/Expr/ogcpropertyname.cpp \
    Ogc/Filter/ogcfilter.cpp \
    Se/Attritubes/seencoding.cpp \
    Se/Attritubes/sefallbackvalue.cpp \
    Se/Attritubes/semethod.cpp \
    Se/Attritubes/semode.cpp \
    Se/Attritubes/senameattr.cpp \
    Se/Attritubes/sethreshholdsbelongto.cpp \
    Se/Attritubes/seuom.cpp \
    Se/Attritubes/seversion.cpp \
    Se/Common/seabstract.cpp \
    Se/Common/secoveragename.cpp \
    Se/Common/sedescription.cpp \
    Se/Common/sefeaturetypename.cpp \
    Se/Common/seinlinecontent.cpp \
    Se/Common/sename.cpp \
    Se/Common/seonlineresource.cpp \
    Se/Common/setitle.cpp \
    Se/FeatureStyle/secoveragestyle.cpp \
    Se/FeatureStyle/seelsefilter.cpp \
    Se/FeatureStyle/sefeaturetypestyle.cpp \
    Se/FeatureStyle/selegendgraphic.cpp \
    Se/FeatureStyle/semaxscaledenominator.cpp \
    Se/FeatureStyle/seminscaledenominator.cpp \
    Se/FeatureStyle/serule.cpp \
    Se/FeatureStyle/sesemantictypeidentifier.cpp \
    Se/Symbolizer/seanchorpoint.cpp \
    Se/Symbolizer/seanchorpointx.cpp \
    Se/Symbolizer/seanchorpointy.cpp \
    Se/Symbolizer/sebasesymbolizer.cpp \
    Se/Symbolizer/sebluechannel.cpp \
    Se/Symbolizer/sebrightnessonly.cpp \
    Se/Symbolizer/secategorize.cpp \
    Se/Symbolizer/sechannelselection.cpp \
    Se/Symbolizer/secolormap.cpp \
    Se/Symbolizer/secolorreplacement.cpp \
    Se/Symbolizer/secontrastenhancement.cpp \
    Se/Symbolizer/sedata.cpp \
    Se/Symbolizer/sedisplacement.cpp \
    Se/Symbolizer/sedisplacementx.cpp \
    Se/Symbolizer/sedisplacementy.cpp \
    Se/Symbolizer/seexternalgraphic.cpp \
    Se/Symbolizer/sefill.cpp \
    Se/Symbolizer/sefont.cpp \
    Se/Symbolizer/seformat.cpp \
    Se/Symbolizer/sefunction.cpp \
    Se/Symbolizer/segammavalue.cpp \
    Se/Symbolizer/segap.cpp \
    Se/Symbolizer/segeneralizeline.cpp \
    Se/Symbolizer/segeometry.cpp \
    Se/Symbolizer/segraphic.cpp \
    Se/Symbolizer/segraphicfill.cpp \
    Se/Symbolizer/segraphicstroke.cpp \
    Se/Symbolizer/segraychannel.cpp \
    Se/Symbolizer/segreenchannel.cpp \
    Se/Symbolizer/sehalo.cpp \
    Se/Symbolizer/sehistogram.cpp \
    Se/Symbolizer/seimageoutline.cpp \
    Se/Symbolizer/seinitialgap.cpp \
    Se/Symbolizer/seinterpolate.cpp \
    Se/Symbolizer/seinterpolationpoint.cpp \
    Se/Symbolizer/seisaligned.cpp \
    Se/Symbolizer/seisrepeated.cpp \
    Se/Symbolizer/selabel.cpp \
    Se/Symbolizer/selabelplacement.cpp \
    Se/Symbolizer/selineplacement.cpp \
    Se/Symbolizer/selinesymbolizer.cpp \
    Se/Symbolizer/selookupvalue.cpp \
    Se/Symbolizer/semapitem.cpp \
    Se/Symbolizer/semark.cpp \
    Se/Symbolizer/semarkindex.cpp \
    Se/Symbolizer/senormalize.cpp \
    Se/Symbolizer/seopacity.cpp \
    Se/Symbolizer/seoverlapbehavior.cpp \
    Se/Symbolizer/separametervalue.cpp \
    Se/Symbolizer/seperpendicularoffset.cpp \
    Se/Symbolizer/sepointplacement.cpp \
    Se/Symbolizer/sepointsymbolizer.cpp \
    Se/Symbolizer/sepolygonsymbolizer.cpp \
    Se/Symbolizer/seradius.cpp \
    Se/Symbolizer/serastersymbolizer.cpp \
    Se/Symbolizer/serecode.cpp \
    Se/Symbolizer/seredchannel.cpp \
    Se/Symbolizer/serelieffactor.cpp \
    Se/Symbolizer/serotation.cpp \
    Se/Symbolizer/seshadedrelief.cpp \
    Se/Symbolizer/sesize.cpp \
    Se/Symbolizer/sesourcechannelname.cpp \
    Se/Symbolizer/sestroke.cpp \
    Se/Symbolizer/sesvgparameter.cpp \
    Se/Symbolizer/sesymbolizer.cpp \
    Se/Symbolizer/setextsymbolizer.cpp \
    Se/Symbolizer/sethreshold.cpp \
    Se/Symbolizer/sevalue.cpp \
    Se/Symbolizer/sewellknownname.cpp \
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
    Xlink/Attritubes/xlinkactuate.cpp \
    Xlink/Attritubes/xlinkarcrole.cpp \
    Xlink/Attritubes/xlinkhref.cpp \
    Xlink/Attritubes/xlinkrole.cpp \
    Xlink/Attritubes/xlinkshow.cpp \
    Xlink/Attritubes/xlinktitle.cpp \
    Xlink/Attritubes/xlinktype.cpp \
    Xml/attribute.cpp \
    Xml/element.cpp \
    Xml/reader.cpp \
    main.cpp \
    mainwindow.cpp \

HEADERS += \
    Gml/gmlfeaturecollection.h \
    Ogc/Expr/ogcexpression.h \
    Ogc/Expr/ogcpropertyname.h \
    Ogc/Filter/ogcfilter.h \
    Se/Attritubes/seencoding.h \
    Se/Attritubes/sefallbackvalue.h \
    Se/Attritubes/semethod.h \
    Se/Attritubes/semode.h \
    Se/Attritubes/senameattr.h \
    Se/Attritubes/sethreshholdsbelongto.h \
    Se/Attritubes/seuom.h \
    Se/Attritubes/seversion.h \
    Se/Common/seabstract.h \
    Se/Common/secoveragename.h \
    Se/Common/sedescription.h \
    Se/Common/sefeaturetypename.h \
    Se/Common/seinlinecontent.h \
    Se/Common/sename.h \
    Se/Common/seonlineresource.h \
    Se/Common/setitle.h \
    Se/FeatureStyle/secoveragestyle.h \
    Se/FeatureStyle/seelsefilter.h \
    Se/FeatureStyle/sefeaturetypestyle.h \
    Se/FeatureStyle/selegendgraphic.h \
    Se/FeatureStyle/semaxscaledenominator.h \
    Se/FeatureStyle/seminscaledenominator.h \
    Se/FeatureStyle/serule.h \
    Se/FeatureStyle/sesemantictypeidentifier.h \
    Se/Symbolizer/seanchorpoint.h \
    Se/Symbolizer/seanchorpointx.h \
    Se/Symbolizer/seanchorpointy.h \
    Se/Symbolizer/sebasesymbolizer.h \
    Se/Symbolizer/sebluechannel.h \
    Se/Symbolizer/sebrightnessonly.h \
    Se/Symbolizer/secategorize.h \
    Se/Symbolizer/sechannelselection.h \
    Se/Symbolizer/secolormap.h \
    Se/Symbolizer/secolorreplacement.h \
    Se/Symbolizer/secontrastenhancement.h \
    Se/Symbolizer/sedata.h \
    Se/Symbolizer/sedisplacement.h \
    Se/Symbolizer/sedisplacementx.h \
    Se/Symbolizer/sedisplacementy.h \
    Se/Symbolizer/seexternalgraphic.h \
    Se/Symbolizer/sefill.h \
    Se/Symbolizer/sefont.h \
    Se/Symbolizer/seformat.h \
    Se/Symbolizer/sefunction.h \
    Se/Symbolizer/segammavalue.h \
    Se/Symbolizer/segap.h \
    Se/Symbolizer/segeneralizeline.h \
    Se/Symbolizer/segeometry.h \
    Se/Symbolizer/segraphic.h \
    Se/Symbolizer/segraphicfill.h \
    Se/Symbolizer/segraphicstroke.h \
    Se/Symbolizer/segraychannel.h \
    Se/Symbolizer/segreenchannel.h \
    Se/Symbolizer/sehalo.h \
    Se/Symbolizer/sehistogram.h \
    Se/Symbolizer/seimageoutline.h \
    Se/Symbolizer/seinitialgap.h \
    Se/Symbolizer/seinterpolate.h \
    Se/Symbolizer/seinterpolationpoint.h \
    Se/Symbolizer/seisaligned.h \
    Se/Symbolizer/seisrepeated.h \
    Se/Symbolizer/selabel.h \
    Se/Symbolizer/selabelplacement.h \
    Se/Symbolizer/selineplacement.h \
    Se/Symbolizer/selinesymbolizer.h \
    Se/Symbolizer/selookupvalue.h \
    Se/Symbolizer/semapitem.h \
    Se/Symbolizer/semark.h \
    Se/Symbolizer/semarkindex.h \
    Se/Symbolizer/senormalize.h \
    Se/Symbolizer/seopacity.h \
    Se/Symbolizer/seoverlapbehavior.h \
    Se/Symbolizer/separametervalue.h \
    Se/Symbolizer/seperpendicularoffset.h \
    Se/Symbolizer/sepointplacement.h \
    Se/Symbolizer/sepointsymbolizer.h \
    Se/Symbolizer/sepolygonsymbolizer.h \
    Se/Symbolizer/seradius.h \
    Se/Symbolizer/serastersymbolizer.h \
    Se/Symbolizer/serecode.h \
    Se/Symbolizer/seredchannel.h \
    Se/Symbolizer/serelieffactor.h \
    Se/Symbolizer/serotation.h \
    Se/Symbolizer/seshadedrelief.h \
    Se/Symbolizer/sesize.h \
    Se/Symbolizer/sesourcechannelname.h \
    Se/Symbolizer/sestroke.h \
    Se/Symbolizer/sesvgparameter.h \
    Se/Symbolizer/sesymbolizer.h \
    Se/Symbolizer/setextsymbolizer.h \
    Se/Symbolizer/sethreshold.h \
    Se/Symbolizer/sevalue.h \
    Se/Symbolizer/sewellknownname.h \
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
    Xlink/Attritubes/xlinkactuate.h \
    Xlink/Attritubes/xlinkarcrole.h \
    Xlink/Attritubes/xlinkhref.h \
    Xlink/Attritubes/xlinkrole.h \
    Xlink/Attritubes/xlinkshow.h \
    Xlink/Attritubes/xlinktitle.h \
    Xlink/Attritubes/xlinktype.h \
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


