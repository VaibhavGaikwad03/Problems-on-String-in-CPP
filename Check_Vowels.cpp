/*

Write a program which accepts  string from the user and check whether it contains vowels in it or not

Input : "Marvellous"
Output : It contains vowels

Input : xyz
Output : It does not contains vowels

*/

#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string, std::getline;

bool check_vowels(string str)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < str.size(); iCnt++)
    {
        if (str[iCnt] == 'a' || str[iCnt] == 'e' ||
            str[iCnt] == 'i' || str[iCnt] == 'o' ||
            str[iCnt] == 'u' || str[iCnt] == 'A' ||
            str[iCnt] == 'E' || str[iCnt] == 'I' ||
            str[iCnt] == 'O' || str[iCnt] == 'U')
            break;
    }

    if (iCnt != str.size())
        return true;
    else
        return false;
}

int main(void)
{
    string str;
    bool bRet = false;

    cout << "Enter the string :\n";
    getline(cin, str);

    bRet = check_vowels(str);

    if (bRet == true)
        cout << endl
             << "It contains vowels\n";
    else
        cout << endl
             << "It doest not contains vowels\n";

    return 0;
}