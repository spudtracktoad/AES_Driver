#include "AESUnitTests.h"

bool AESUnitTests::xTimeTestOne()
{
    bool result = false;

    AES* test = new AES();

    uint8_t xTimeTest = test->xTime(xTimeTestValues[0]);

    result = (xTimeTest == xTimeTestValues[1]);

    return result;
}

bool AESUnitTests::xTimeTestTwo()
{
    bool result = false;

    AES* test = new AES();

    uint8_t xTimeTest = test->xTime(xTimeTestValues[1]);

    result = (xTimeTest == xTimeTestValues[2]);

    return result;
}

bool AESUnitTests::xTimeTestThree()
{
    bool result = false;

    AES* test = new AES();

    uint8_t xTimeTest = test->xTime(xTimeTestValues[2]);

    result = (xTimeTest == xTimeTestValues[3]);

    return result;
}

bool AESUnitTests::xtimeTestFour()
{
    bool result = false;

    AES* test = new AES();

    uint8_t xTimeTest = test->xTime(xTimeTestValues[3]);

    result = (xTimeTest == xTimeTestValues[4]);

    return result;
}

bool AESUnitTests::ffMultiplyTestOne()
{
    bool result = false;

    AES* test = new AES();

    result = (0xc1 == test->ffMultiply(0x57, 0x83));

    return result;
}

bool AESUnitTests::ffMultiplyTestTwo()
{
    bool result = false;

    AES* test = new AES();

    result = (0xfe == test->ffMultiply(0x57, 0x13));

    return result;
}

bool AESUnitTests::ffAddTestOne()
{
    bool result = false;

    AES* test = new AES();
    
    result = (0xd4 == (test->ffAdd(0x57, 0x83)));

    return result;
}
