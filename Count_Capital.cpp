/*

Write a program which accepts string from the user and count number of capital letters.

Input : "Marvellous Multi OS"
Output : 4

*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int CountCapital(string str)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] >= 'A' && str[iCnt] <= 'Z')
            iCount++;
    }
    return iCount;
}

int main(void)
{
    string str;
    int iRet = 0;

    cout << "Enter the string : \n";
    getline(cin, str);

    iRet = CountCapital(str);

    cout << endl
         << "Count of capital letters in string is : " << iRet << endl;

    return 0;
}