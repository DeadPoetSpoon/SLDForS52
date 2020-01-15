#ifndef SEFALLBACKVALUE_H
#define SEFALLBACKVALUE_H
#include "Xml/attribute.h"
///
/// \brief The SeFallbackValue class
/// 返回值
///
class SeFallbackValue : public Attribute
{
public:
    SeFallbackValue();
private:
    QString _fallbackValue;
};

#endif // SEFALLBACKVALUE_H
