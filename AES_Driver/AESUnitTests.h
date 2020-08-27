#pragma once

#include "AES.h"

class AESUnitTests
{
    uint8_t xTimeTestValues[5] = { 0x57, 0xae, 0x47, 0x8e, 0x07 };

public:
    bool xTimeTestOne();
    bool xTimeTestTwo();
    bool xTimeTestThree();
    bool xtimeTestFour();
    bool ffMultiplyTestOne();
    bool ffMultiplyTestTwo();
    bool ffAddTestOne();
    bool mixColumns();
};

