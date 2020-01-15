#ifndef SEMETHOD_H
#define SEMETHOD_H
#include "Xml/attribute.h"
///
/// \brief The SeMethod class
/// 方法
///
class SeMethod:public Attribute
{
public:
    SeMethod();
    enum METHODTYPE{NUMERIC,COLOR};
private:
    METHODTYPE _methodType;
    QString _method;
};

#endif // SEMETHOD_H
