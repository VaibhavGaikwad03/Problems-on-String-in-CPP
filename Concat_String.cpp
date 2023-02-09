/*

Write a program which accepts 2 strings from user and concat second string after first string.

Input : "Marvellous Infosystems"
Input : "Logic Building"

Output : "Marvellous Infosystems Logic Building"

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string ConcatString(string &dest, const string &src)
{
    return dest += src;
}

int main(void)
{
    string str1, str2;
    string str;

    cout << "Enter first string : \n";
    getline(cin, str1);

    cout << "Enter second string : \n";
    getline(cin, str2);

    str = ConcatString(str1, str2);

    cout << endl
         << "Concated string is : " << str << endl;

    return 0;
}