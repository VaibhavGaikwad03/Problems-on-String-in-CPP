/*

Accepet character from user and check whether it is Small or not

Input : f
Output : It is a Small Character

Input : A
Output : It is not a Small Character

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_small(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
        return true;
    return false;
}

int main(void)
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the character : \n";
    cin >> cValue;

    bRet = check_small(cValue);

    if (bRet == true)
        cout << endl
             << "It is a small character\n";
    else
        cout << endl
             << "It is not a small character\n";

    return 0;
}