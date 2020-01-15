#ifndef SECONTRASTENHANCEMENT_H
#define SECONTRASTENHANCEMENT_H
#include "Xml/element.h"
#include "Se/Symbolizer/senormalize.h"
#include "Se/Symbolizer/sehistogram.h"
#include "Se/Symbolizer/segammavalue.h"
///
/// \brief The SeContrastEnhancement class
/// "ContrastEnhancement" defines the 'stretching' of contrast for a channel of a false-color image or for a whole grey/color image. Contrast enhancement is used to make ground features in images more visible.
/// “对比度增强”定义了假彩色图像通道或整个灰色/彩色图像的对比度“拉伸”。对比度增强用于使图像中的地面特征更明显。
///
class SeContrastEnhancement : public Element
{
public:
    SeContrastEnhancement();
    enum ENHANCEMENTTYPE{NORMALIZE,HISTOGRAM,NONEENHANCEMENTTYPE};
private:
    ENHANCEMENTTYPE _enhancementType = NONEENHANCEMENTTYPE;
    SeNormalize* _seNormalize = nullptr;
    SeHistogram* _seHistogram = nullptr;
    SeGammaValue* _seGammaValue = nullptr;
};

#endif // SECONTRASTENHANCEMENT_H
