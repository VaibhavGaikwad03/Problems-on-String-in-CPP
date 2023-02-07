/*

Accept character from user. if character is small display its corresponding capital character and if it is small then display its corresponding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 3
Output : 3

Input : %
Output : %

*/

#include <iostream>
using std::cin;
using std::cout;

void DisplayCorresponding(const char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
        cout << (char)(cValue + 32);
    else if (cValue >= 'a' && cValue <= 'z')
        cout << (char)(cValue - 32);
    else
        cout << cValue;
}

int main(void)
{
    char cValue = '\0';

    cout << "Enter the character : \n";
    cin >> cValue;

    DisplayCorresponding(cValue);

    return 0;
}