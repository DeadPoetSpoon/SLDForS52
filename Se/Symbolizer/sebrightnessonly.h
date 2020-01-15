#ifndef SEBRIGHTNESSONLY_H
#define SEBRIGHTNESSONLY_H
#include "Xml/element.h"
///
/// \brief The SeBrightnessOnly class
/// bool value
/// 是否仅仅亮度
///
class SeBrightnessOnly : public Element
{
public:
    SeBrightnessOnly();
private:
    bool _seBrightnessOnly;
};

#endif // SEBRIGHTNESSONLY_H
