#ifndef SEDATA_H
#define SEDATA_H
#include "Xml/element.h"
///
/// \brief The SeData class
/// 数据
///
class SeData : public Element
{
public:
    SeData();
private:
    QString _data;
};

#endif // SEDATA_H
