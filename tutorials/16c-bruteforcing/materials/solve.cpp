#include <iostream>
#include <cstdint> // Included for uint32_t to ensure safe 32-bit operations

using namespace std;

void brute( void )
{
    char finalAsciiSerial[11] = "";
    int i, tempSerial[10];
    
    // Using unsigned 32-bit integers is safer here due to bitwise operations 
    // and large hexadecimal additions/subtractions.
    uint32_t varA, varB, varC, tempVar; 

    // we know the first number is '7'
    for (tempSerial[0] = 7; tempSerial[0] <= 7; tempSerial[0]++)
    {
        // and we know the second number is '9'
        for (tempSerial[1] = 9; tempSerial[1] <= 9; tempSerial[1]++)
        {
            // Iterate through hex values 1-15 (1 to F)
            for (tempSerial[2] = 1; tempSerial[2] <= 15; tempSerial[2]++)
            {
                for (tempSerial[3] = 1; tempSerial[3] <= 15; tempSerial[3]++)
                {
                    for (tempSerial[4] = 1; tempSerial[4] <= 15; tempSerial[4]++)
                    {
                        cout << ".";    // Update display
                        for (tempSerial[5] = 1; tempSerial[5] <= 15; tempSerial[5]++)
                        {
                            for (tempSerial[6] = 1; tempSerial[6] <= 15; tempSerial[6]++)
                            {
                                for (tempSerial[7] = 1; tempSerial[7] <= 15; tempSerial[7]++)
                                {
                                    for (tempSerial[8] = 1; tempSerial[8] <= 15; tempSerial[8]++)
                                    {
                                        for (tempSerial[9] = 1; tempSerial[9] <= 15; tempSerial[9]++)
                                        {
                                            // Reset variables
                                            varA = 0xDEAD;
                                            varB = 0xDEAD;
                                            varC = 0x42424242;

                                            // Apply each digit
                                            for (i = 0; i < 10; i++)
                                            {
                                                switch (tempSerial[i])
                                                {
                                                case 1:
                                                    varC += 0x54B;
                                                    varB *= varA;
                                                    varA ^= varC;
                                                    break;

                                                case 2:
                                                    varC = varC - 0x233 + varA;
                                                    varB = (varB * 0x14) & varA;
                                                    break;

                                                case 3:
                                                    varA += 0x582;
                                                    varC *= 0x16;
                                                    varB ^= varA;
                                                    break;

                                                case 4:
                                                    varA &= varB;
                                                    varB -= 0x111222;
                                                    varC ^= varA;
                                                    break;

                                                case 5:
                                                    if (varC != 0)        // Watch divide by zero!
                                                    {
                                                        varB -= (varA % varC);
                                                        varA /= varC;
                                                        varA += varC;
                                                    }
                                                    break;

                                                case 6:
                                                    varA ^= varC;
                                                    varB &= varA;
                                                    varC += 0x546879;
                                                    break;

                                                case 7:
                                                    varC -= 0x25FF5;
                                                    varB ^= varC;
                                                    varA += 0x401000;
                                                    break;

                                                case 8:
                                                    varA ^= varC;
                                                    varB *= 0x14;
                                                    varC += 0x12589;
                                                    break;

                                                case 9:
                                                    varA -= 0x542187;
                                                    varB -= varA;
                                                    varC ^= varA;
                                                    break;

                                                case 10:
                                                    if (varB != 0)        // Watch divide by zero!
                                                    {
                                                        tempVar = varA % varB;
                                                        varA /= varB;
                                                        varB += tempVar;
                                                        varA *= tempVar;
                                                        varC ^= tempVar;
                                                    }
                                                    break;

                                                case 11:
                                                    varB += 0x1234FE;
                                                    varC += 0x2345DE;
                                                    varA += 0x9CA4439B;
                                                    break;

                                                case 12:
                                                    varA ^= varB;
                                                    varB -= varC;
                                                    varC *= 0x12;
                                                    break;

                                                case 13:
                                                    varA &= 0x12345678;
                                                    varC -= 0x65875;
                                                    varB *= varC;
                                                    break;

                                                case 14:
                                                    varA ^= 0x55555;
                                                    varB -= 0x587351;
                                                    break;

                                                case 15:
                                                    varA += varB;
                                                    varB += varC;
                                                    varC += varA;
                                                    break;
                                                }
                                            }

                                            // stop if serial equals proper values
                                            if ((varA == 0x9CC5B4B9) && 
                                                (varB == 0xD1EB13FB) && 
                                                (varC == 0x837D424E))
                                            {
                                                // Convert to ASCII
                                                for (i = 0; i < 10; i++)
                                                {
                                                    if (tempSerial[i] < 10)
                                                    {
                                                        finalAsciiSerial[i] = tempSerial[i] + 0x30; // '0' - '9'
                                                    }
                                                    else
                                                    {
                                                        finalAsciiSerial[i] = tempSerial[i] + 0x37; // 'A' - 'F'
                                                    }
                                                }
                                                
                                                cout << "\n\n***** Bruteforced serial: ";
                                                cout << finalAsciiSerial << "\n";
                                                return;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    cout << "Bruteforcer by R4ndom\n\n";

    brute();

    cout << "\nBruteforcing done...\n";

    return 0;
}