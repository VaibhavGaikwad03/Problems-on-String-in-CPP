/*

Accepet character from user and check whether it is Capital or not

Input : F
Output : It is a Capital Character

Input : d
Output : It is not a Capital Character

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_capital(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
        return true;

    return false;
}

int main(void)
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the character : " << endl;
    cin >> cValue;

    bRet = check_capital(cValue);

    if (bRet == true)
        cout << endl
             << "It is a capital letter\n";

    else
        cout << endl
             << "It is not a capital letter\n";

    return 0;
}
