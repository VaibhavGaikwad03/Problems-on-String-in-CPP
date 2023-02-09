/*

Write a program which accepts  string from the user and copy the contents of that string into another string.

Input : "Marvellous Multi OS"

Output : "Marvellous Multi OS"

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

string CopyString(string &dest, const string &src)
{
    dest = src;
    return dest;
}

int main(void)
{
    string str, str1, str2;

    cout << "Enter the string : \n";
    getline(cin, str2);

    str = CopyString(str1, str2);

    cout << endl
         << "Copied string is : " << str << endl;

    return 0;
}