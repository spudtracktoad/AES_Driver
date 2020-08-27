// AES_Driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "AES.h"
#include "AESUnitTests.h"

#define TESTBYTEA 0x57
#define XTIMETESTRESULT 0xae
#define TESTBYTEB 0x83

using namespace std;

int main()
{
    AESUnitTests* test = new AESUnitTests();

    cout << "Hello World!\n";
    cout << "xTimeTestOne: " << test->xTimeTestOne() << endl;
    cout << "xTimeTestTwo: " << test->xTimeTestTwo() << endl;
    cout << "xTimeTestThree: " << test->xTimeTestThree() << endl;
    cout << "xtimeTestFour: " << test->xtimeTestFour() << endl;
    cout << "ffMultiplyTestOne: " << test->ffMultiplyTestOne() << endl;
    cout << "ffMultiplyTestTwo: " << test->ffMultiplyTestTwo() << endl;
    cout << "ffAddTestOne: " << test->ffAddTestOne() << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
