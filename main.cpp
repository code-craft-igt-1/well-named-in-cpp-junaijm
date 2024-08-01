#include "ColorCoderTest.h"

int main() 
{
    TeleCommColorCoderTest::testNumberToPair(4, TeleCommColorCoder::WHITE, TeleCommColorCoder::BROWN);
    TeleCommColorCoderTest::testNumberToPair(5, TeleCommColorCoder::WHITE, TeleCommColorCoder::SLATE);

    TeleCommColorCoderTest::testPairToNumber(TeleCommColorCoder::BLACK, TeleCommColorCoder::ORANGE, 12);
    TeleCommColorCoderTest::testPairToNumber(TeleCommColorCoder::VIOLET, TeleCommColorCoder::SLATE, 25);

    return 0;
}
