#ifndef SETHRESHHOLDSBELONGTO_H
#define SETHRESHHOLDSBELONGTO_H
#include "Xml/attribute.h"
///
/// \brief The SeThreshholdsBelongTo class
/// 阈值属于
///
class SeThreshholdsBelongTo : public Attribute
{
public:
    SeThreshholdsBelongTo();
    enum BELONGTOTYPE{SUCCEEDING,PRECEDING};
private:
    BELONGTOTYPE _belongToType;
    QString _belongTo;
};

#endif // SETHRESHHOLDSBELONGTO_H
