#include "ColorCoderTest.h"
#include <iostream>
#include <assert.h>

using namespace TeleCommColorCoder;
namespace TeleCommColorCoderTest
{
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
    {
        ColorPair colorPair = ColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
    {
        int pairNumber = ColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}