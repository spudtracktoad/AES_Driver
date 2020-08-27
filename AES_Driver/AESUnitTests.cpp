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

bool AESUnitTests::mixColumns()
{
    bool result = false;

    AES* test = new AES();

    uint8_t input[4][4]{ {0xd4, 0xe0, 0xb8, 0x1e},
                        {0xbf, 0xb4, 0x41, 0x27},
                        {0x5d, 0x52, 0x11, 0x98},
                        {0x30, 0xae, 0xf1, 0xe5} };
    uint8_t output[4][4]{ {0x04, 0xe0, 0x48, 0x28},
                        {0x66, 0xcb, 0xf8, 0x06},
                        {0x81, 0x19, 0xd3, 0x26},
                        {0xe5, 0x9a, 0x7a, 0x4c} };

    uint8_t** stateResult = new uint8_t * [4];
    for (int i = 0; i < 4; ++i)
        stateResult[i] = new uint8_t[4];

    test->SetState(input);

    test->mixColumns();

    stateResult = test->getState();

    return false;
}
