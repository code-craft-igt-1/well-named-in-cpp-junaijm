#pragma once
#include "ColorPair.h"

namespace TeleCommColorCoder
{
    class ColorCoder
    {
    public:
        static ColorPair GetColorFromPairNumber(int pairNumber);
        static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    };
}

