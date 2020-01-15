#ifndef SEVERSION_H
#define SEVERSION_H
#include "Xml/attribute.h"
///
/// \brief The SeVersion class
/// The "VersionType" merely restricts the version string that may be used with XML documents based on this schema
/// “VersionType”仅限制可能与基于此模式的XML文档一起使用的版本字符串
///
///
class SeVersion : public Attribute
{
public:
    SeVersion();
private:
    QString _version = "1.1.0";
};

#endif // SEVERSION_H
