/*

Write a program which accepts string from the user and display only digits from that string.

Input : "marve89llous121"
Output : "89121"

Input : Demo
Output :

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::getline;
using std::string;

void DisplayDigits(const string str)
{
    for (char c : str)
    {
        if (c >= '0' && c <= '9')
            cout << c;
    }
}

int main(void)
{
    string str;

    cout << "Enter the string : \n";
    getline(cin, str);

    DisplayDigits(str);

    return 0;
}