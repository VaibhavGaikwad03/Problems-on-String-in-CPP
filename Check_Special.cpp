
/*

Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *)

Input : %
Output : It is a special character

Input : d
Output : It is not a special character

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_special(char cValue)
{
    if (cValue == '!' || cValue == '@' ||
        cValue == '#' || cValue == '$' ||
        cValue == '%' || cValue == '^' ||
        cValue == '&' || cValue == '*')
        return true;
    return false;
}

int main(void)
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the character : \n";
    cin >> cValue;

    bRet = check_special(cValue);

    if (bRet == true)
        cout << endl
             << "It is a special character\n";
    else
        cout << endl
             << "It is not a special character\n";

    return 0;
}