#include "ColorCoder.h"
#include <sstream>
#include <iostream>

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

    void ColorCoder::PrintColorPairs()
    {
        std::ostringstream helpText;
        helpText << "Number\t" << "Major Color\t" << "Minor Color" << std::endl;

        for (int majorColor = WHITE; majorColor < NUMBEROFMAJORCOLORS; majorColor++)
        {
            for (int minorColor = BLUE; minorColor < NUMBEROFMINORCOLORS; minorColor++)
            {
                ColorPair pairToLog(static_cast<MajorColor>(majorColor), static_cast<MinorColor>(minorColor));

                helpText << GetPairNumberFromColor(pairToLog.getMajor(),pairToLog.getMinor()) << "\t";
                helpText << pairToLog.ToString() << std::endl;
            }
        }

        std::cout << helpText.str();
    }
}

