#ifndef SERELIEFFACTOR_H
#define SERELIEFFACTOR_H
#include "Xml/element.h"
///
/// \brief The SeReliefFactor class
/// bool value
/// 是否缓解因子？
///
class SeReliefFactor : public Element
{
public:
    SeReliefFactor();
private:
    bool _seReliefFactor;
};

#endif // SERELIEFFACTOR_H
