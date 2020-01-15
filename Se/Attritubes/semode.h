#ifndef SEMODE_H
#define SEMODE_H
#include "Xml/attribute.h"
///
/// \brief The SeMode class
/// 模式
///
class SeMode : public Attribute
{
public:
    SeMode();
    enum MODETYPE{LINEAR,COSINE,CUBIC};
private:
    MODETYPE _modeType;
    QString _mode;
};

#endif // SEMODE_H
