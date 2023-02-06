// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include <iostream>
#include <string>
using std::cout;

void DiplayASCII()
{
    char c = 0;
    cout << "ASCII table is : \n";
    while (c != 127)
    {
        printf("Symbol : %c\tDecimal : %d\tHexadecimal : %x\tOctal : %o\n", c, c, c, c);
        c++;
    }
}

int main(void)
{
    DiplayASCII();

    return 0;
}