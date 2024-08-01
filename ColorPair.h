#pragma once
#include <string>

namespace TeleCommColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET, NUMBEROFMAJORCOLORS };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE, NUMBEROFMINORCOLORS };

    class ColorPair {
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();

        static std::string getMajorColorName(MajorColor majorColorNumber);
        static std::string getMinorColorName(MinorColor minorColorNumber);

    private:
        MajorColor majorColor;
        MinorColor minorColor;
    };
}