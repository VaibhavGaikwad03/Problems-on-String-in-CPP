/*

Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input : A

Output :
Decimal     65
Octal       0101
Hexadecimal 0X41

*/

#include <iostream>
using std::cin;
using std::cout;

void DisplayASCIIValue(const char cValue)
{
    printf("Decimal : %d\nOctal : %o\nHexadecimal : %x\n", cValue, cValue, cValue);
}

int main(void)
{
    char cValue = '\0';

    cout << "Enter the character : \n";
    cin >> cValue;

    DisplayASCIIValue(cValue);

    return 0;
}