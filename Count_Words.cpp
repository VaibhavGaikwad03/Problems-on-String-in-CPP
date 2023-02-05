/*

Write a program which accepts string from the user and count the words in that string.

Input : India is my country.
Output : 4

*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int CountWords(const string str)
{
    int iCnt = 0, iCountWords = 1;

    for (iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if (str[iCnt] == ' ')
            iCountWords++;
    }
    return iCountWords;
}

int main(void)
{
    string str;
    int iRet = 0;

    cout << "Enter the string : \n";
    getline(cin, str);

    iRet = CountWords(str);

    cout << endl
         << "There are " << iRet << " words in string.\n";

    return 0;
}