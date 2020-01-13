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
    element.cpp \
    gmlfeaturecollection.cpp \
    main.cpp \
    mainwindow.cpp \
    ogcfilter.cpp \
    reader.cpp \
    secoveragename.cpp \
    secoveragestyle.cpp \
    sedescription.cpp \
    sefeaturetypename.cpp \
    sefeaturetypestyle.cpp \
    sename.cpp \
    seonlineresource.cpp \
    sldcoverageconstraint.cpp \
    sldcoverageextent.cpp \
    sldextent.cpp \
    sldfeaturetypeconstraint.cpp \
    sldinlinefeature.cpp \
    sldisdefault.cpp \
    sldlayercoverageconstraints.cpp \
    sldlayerfeatureconstraints.cpp \
    sldnamedlayer.cpp \
    sldnamedstyle.cpp \
    sldrangeaxis.cpp \
    sldremoteows.cpp \
    sldservice.cpp \
    sldtimeperiod.cpp \
    slduserlayer.cpp \
    slduserstyle.cpp \
    sldusesldlibrary.cpp \
    sldvalue.cpp \
    styledlayerdescriptor.cpp

HEADERS += \
    element.h \
    gmlfeaturecollection.h \
    mainwindow.h \
    ogcfilter.h \
    reader.h \
    secoveragename.h \
    secoveragestyle.h \
    sedescription.h \
    sefeaturetypename.h \
    sefeaturetypestyle.h \
    sename.h \
    seonlineresource.h \
    sldcoverageconstraint.h \
    sldcoverageextent.h \
    sldextent.h \
    sldfeaturetypeconstraint.h \
    sldinlinefeature.h \
    sldisdefault.h \
    sldlayercoverageconstraints.h \
    sldlayerfeatureconstraints.h \
    sldnamedlayer.h \
    sldnamedstyle.h \
    sldrangeaxis.h \
    sldremoteows.h \
    sldservice.h \
    sldtimeperiod.h \
    slduserlayer.h \
    slduserstyle.h \
    sldusesldlibrary.h \
    sldvalue.h \
    styledlayerdescriptor.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
