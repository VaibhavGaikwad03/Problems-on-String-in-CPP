/*

Write a program which accepts  string from the user and count number of white spaces.

Input : "Marvellous"
Output : 0

Input : "Marvellous Infosystems by Piyush Manohar Khairnar"
Output : 5

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int CountSpaces(const string str)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] == ' ')
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

    iRet = CountSpaces(str);

    cout << endl
         << "Count of spaces in string is : " << iRet << endl;

    return 0;
}
