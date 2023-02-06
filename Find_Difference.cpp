/*

Write a program which accepts string from the user and return difference between frequency of small characters and frequency of capital characters.

Input : "MarvellouS"
Output : 6 (8 - 2)

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int FindDifference(const string str)
{
    int iCnt = 0, iCountCap = 0, iCountSmall = 0;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] >= 'A' && str[iCnt] <= 'Z')
            iCountCap++;
        if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
            iCountSmall++;
    }
    return iCountSmall - iCountCap;
}

int main(void)
{
    string str;
    int iRet = 0;

    cout << "Enter the string : \n";
    getline(cin, str);

    iRet = FindDifference(str);

    cout << endl
         << "Difference between small and capital characters is : " << iRet << endl;

    return 0;
}