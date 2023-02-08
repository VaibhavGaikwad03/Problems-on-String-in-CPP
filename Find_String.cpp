/*

Write a program which accepts two strings from the user and find out how much times second string occurs in a first string.

Input1 : try not to become a man of success but rather to be a man of value.
Input2 : a man of

Output : String "a man of" exists 2 times

*/ 

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int FindString(const string str1, const string str2)
{
    int iCnt1 = 0, iCnt2 = 0, iCnt3 = 0, iCount = 0;

    for (iCnt1 = 0; iCnt1 < str1.length(); iCnt1++)
    {
        if (str1[iCnt1] == str2[0]) // checks if first character of string matching or not
        {
            for (iCnt2 = 0, iCnt3 = iCnt1; iCnt2 < str2.length(); iCnt2++, iCnt3++)
            {
                if (str1[iCnt3] != str2[iCnt2]) // if strings are not same then break
                    break;
            }
            if (iCnt2 == str2.length()) // it means strings are equal
                iCount++;
        }
    }
    return iCount;
}

int main(void)
{
    int iRet = 0;
    string str1, str2;

    cout << "Enter the string : \n";
    getline(cin, str1);

    cout << "Enter the string to search : \n";
    getline(cin, str2);

    iRet = FindString(str1, str2);

    cout << endl
         << "String \"" << str2 << "\""
         << " exists " << iRet << " times\n";

    return 0;
}
