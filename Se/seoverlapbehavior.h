#ifndef SEOVERLAPBEHAVIOR_H
#define SEOVERLAPBEHAVIOR_H
#include "Xml/element.h"
///
/// \brief The SeOverlapBehavior class
/// "OverlapBehavior" tells a system how to behave when multiple raster images in a layer overlap each other, for example with satellite-image scenes.
/// “OverlapBehavior”告诉系统当一个层中的多个栅格图像相互重叠时，例如在卫星图像场景中如何表现。
///
class SeOverlapBehavior : public Element
{
public:
    SeOverlapBehavior();
    enum OVERLAPBEHAVIORTYPE{LATEST_ON_TOP,EARLIEST_ON_TOP,AVERAGE,RANDOM};
private:
    OVERLAPBEHAVIORTYPE _overlapBehaviorTyoe;
    ///
    /// \brief _overlapBehavior 必有;
    ///
    QString _overlapBehavior;
};

#endif // SEOVERLAPBEHAVIOR_H
