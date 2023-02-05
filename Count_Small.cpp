/*

Write a program which accepts string from the user and count number of small letters.

Input : "Marvellous"
Output : 9

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int CountSmall(const string str)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] >= 'a' && str[iCnt] <= 'z')
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

    iRet = CountSmall(str);

    cout << endl
         << "Count of small elements in string is : " << iRet << endl;

    return 0;
}