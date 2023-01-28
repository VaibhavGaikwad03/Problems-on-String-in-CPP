/*

Accepet character from user and check whether it is alphabet or not

Input : F
Output : It is an Alphabet

Input : $
Output : It is not an Alphabet

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_alphabet(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z' || cValue >= 'A' && cValue <= 'Z')
    {
        return true;
    }
    return false;
}

int main(void)
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the character : " << endl;
    cin >> cValue;

    bRet = check_alphabet(cValue);

    if (bRet == true)
    {
        cout << endl
             << cValue << " is alphabet\n";
    }
    else
    {
        cout << endl
             << cValue << " is not an alphabet\n";
    }

    return 0;
}
