/*

Accepet character from user and check whether it is Digit or not

Input : 7
Output : It is a Digit

Input : d
Output : It is not a Digit

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_digit(char cValue)
{
    if (cValue >= '0' && cValue <= '9')
        return true;
    return false;
}

int main(void)
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the character : \n";
    cin >> cValue;

    bRet = check_digit(cValue);

    if (bRet == true)
        cout << endl
             << "It is a digit\n";
    else
        cout << endl
             << "It is not a digit\n";

    return 0;
}