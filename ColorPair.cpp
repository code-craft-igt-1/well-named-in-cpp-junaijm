#include "ColorPair.h"
#include <string>
#include <iostream>

namespace TeleCommColorCoder
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
        majorColor(major), minorColor(minor)
    {
    }

    MajorColor ColorPair::getMajor() 
    {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() 
    {
        return minorColor;
    }

    std::string ColorPair::ToString() 
    {
        std::string colorPairStr = getMajorColorName(majorColor);
        colorPairStr += "\t";
        colorPairStr += getMinorColorName(minorColor);
        return colorPairStr;
    }

    std::string ColorPair::getMajorColorName(MajorColor majorColorNumber)
    {
        const char* MajorColorNames[] = {
            "White", "Red", "Black", "Yellow", "Violet"
        };
        int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
        if (MajorColor::NUMBEROFMAJORCOLORS != numberOfMajorColors)
        {
            std::cout << "Programming error. NUMBEROFMAJORCOLORS does not match with number of color names" << std::endl;
        }

        return std::string(MajorColorNames[majorColorNumber]);
    }

    std::string ColorPair::getMinorColorName(MinorColor minorColorNumber)
    {
        const char* MinorColorNames[] = {
            "Blue", "Orange", "Green", "Brown", "Slate"
        };
        int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
        if (MinorColor::NUMBEROFMINORCOLORS != numberOfMinorColors)
        {
            std::cout << "Programming error. NUMBEROFMINORCOLORS does not match with number of color names" << std::endl;
        }

        return std::string(MinorColorNames[minorColorNumber]);
    }
}
