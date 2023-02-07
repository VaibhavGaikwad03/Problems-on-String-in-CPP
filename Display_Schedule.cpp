/*

Accept division of student from user and depends in the division display exam timing. There are 4 divisions in school as A, B, C, D. Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM. (Application should be case insensitive)

Input : C
Output : Your exam at 9:20 AM

Input : d
Output : Your exam at 10:30 AM

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void DisplaySchedule(const char cValue)
{
    switch (cValue)
    {
    case 'A':
    case 'a':
        cout << endl
             << "Your exam is at 7 AM\n";
        break;
    case 'B':
    case 'b':
        cout << endl
             << "Your exam is at 8:30 AM\n";
        break;
    case 'C':
    case 'c':
        cout << endl
             << "Your exam is at 9:20 AM\n";
        break;
    case 'D':
    case 'd':
        cout << endl
             << "Your exam is at 10:30 AM\n";
        break;
    default:
        cout << endl
             << "Please enter valid division!\n";
    }
}

int main(void)
{
    char cValue;

    cout << "Enter your division : \n";
    cin >> cValue;

    DisplaySchedule(cValue);

    return 0;
}