/*

Write a program which accepts  string from the user and accept one character. Check whether that character is present in string or not

Input : "Marvellous Multi OS"
Input : e
Output : Character is present in string

Input : "Marvellous Multi OS"
Input : W
Output : Character is not present in string

*/

#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string, std::getline;

bool check_char(string str, char cValue)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < str.size(); iCnt++)
    {
        if (str[iCnt] == cValue)
            break;
    }

    if (iCnt != str.size())
        return true;

    return false;
}

int main(void)
{
    string str;
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter the string : \n";
    getline(cin, str);

    cout << "Enter the character to search inside string : \n";
    cin >> cValue;

    bRet = check_char(str, cValue);

    if (bRet == true)
        cout << "Character is present in string\n";

    else
        cout << "Character is not present in string\n";

    return 0;
}