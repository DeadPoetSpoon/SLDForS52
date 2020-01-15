#ifndef XLINKTYPE_H
#define XLINKTYPE_H
#include "Xml/attribute.h"
///
/// \brief The XlinkType class
/// 类型
///
class XlinkType : public Attribute
{
public:
    XlinkType();
    ///
    /// \brief The TYPETYPT enum 只用上SIMPLE
    ///
    enum TYPETYPT{SIMPLE};
private:
    TYPETYPT _typeType = SIMPLE;
    QString _type = "simple";
};

#endif // XLINKTYPE_H
