#pragma once
#include "ColorCoder.h"

using namespace TeleCommColorCoder;

namespace TeleCommColorCoderTest
{
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
}
