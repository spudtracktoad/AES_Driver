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

void AES::SetState(uint8_t input[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int index = 0; index < 4; index++)
        {
            state[i][index] = input[i][index];
        }
    }
}

uint8_t** AES::getState()
{
    uint8_t** result[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int d = 0; d < 4; d++)
        {
            //result[i][d] = state[i][d];
        }
    }
    return NULL;
}

void AES::mixColumns()
{
    for (int i = 0; i < 4; i++)
    {
        for (int index = 0; index < 4; index++)
        {
            state[i][index] = (ffMultiply(state[i][0], StateMixColumn[i][0]) ^
                               ffMultiply(state[i][1], StateMixColumn[i][1]) ^
                               ffMultiply(state[i][2], StateMixColumn[i][2]) ^
                               ffMultiply(state[i][3], StateMixColumn[i][3]));
        }
    }
}
