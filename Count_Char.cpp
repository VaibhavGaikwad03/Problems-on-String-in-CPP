/*

Write a program which accepts  string from the user and accept one character. return frequency of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 2

Input : "Marvellous Multi OS"
Input : W
Output : 0

*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int CountChar(const string str, const char cValue)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] == cValue)
            iCount++;
    }
    return iCount;
}

int main(void)
{
    string str;
    char cValue;
    int iRet = 0;

    cout << "Enter the string : \n";
    getline(cin, str);

    cout << "Enter the character to count frequency from string : \n";
    cin >> cValue;

    iRet = CountChar(str, cValue);

    cout << endl
         << "Character "
         << "\'" << cValue << "\'"
         << " occurse " << iRet << " times\n";

    return 0;
}