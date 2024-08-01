#include "ColorCoder.h"

namespace TeleCommColorCoder
{
    ColorPair ColorCoder::GetColorFromPairNumber(int pairNumber) 
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / MinorColor::NUMBEROFMINORCOLORS);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % MinorColor::NUMBEROFMINORCOLORS);
        return ColorPair(majorColor, minorColor);
    }

    int ColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return major * MinorColor::NUMBEROFMINORCOLORS + minor + 1;
    }
}

