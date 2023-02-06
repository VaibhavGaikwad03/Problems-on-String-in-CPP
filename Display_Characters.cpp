/*

Accept character from user. If it is capital then display all the characters from the input characters till Z. if input character is small then print all the characters in reverse order till a. In other cases return directly.

Input : Q
Output : Q R S T U V W X Y Z

Input : i
Output : i h g f e  d c b a

Input : 8
Output :

*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

void DisplayCharacters(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        while (cValue <= 'Z')
            cout << cValue++ << "\t";
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        while (cValue >= 'a')
            cout << cValue-- << "\t";
    }
    else
        return;
}

int main(void)
{
    char cValue;

    cout << "Enter the character : \n";
    cin >> cValue;

    DisplayCharacters(cValue);

    return 0;
}