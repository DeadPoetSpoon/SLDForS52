#ifndef SEENCODING_H
#define SEENCODING_H
#include "Xml/attribute.h"
///
/// \brief The SeEncoding class
/// enum value
/// 编码格式
///
class SeEncoding : public Attribute
{
public:
    SeEncoding();
    enum ENCODINGTYPE{XML,BASE64};
private:
    ENCODINGTYPE _encodingType;
    QString _encoding;
};

#endif // SEENCODING_H
