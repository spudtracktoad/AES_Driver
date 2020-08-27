#include "AES.h"

uint8_t AES::xTime(uint8_t input)
{
    uint8_t result;

    result = input << 1;
    if (input & HIGHBIT)
        result = result ^ XORBYTE;

    return result;
}

uint8_t AES::ffAdd(int8_t addend1, uint8_t addend2)
{
    return addend1 ^ addend2;
}

uint8_t AES::ffMultiply(uint8_t multiplicand, uint8_t multiplier)
{
    uint8_t result = 0x0;
    uint8_t temp = multiplicand;

    for (int i = 0; i < 8; i++)
    {
        if (multiplier & 1 << (i))
        {
            result = result ^ temp;
        }
        temp = xTime(temp);
    }
    return result;
}
