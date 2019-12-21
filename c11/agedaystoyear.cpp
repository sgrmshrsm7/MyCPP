//Program to convert age of a person from days to year month and days format.

#include <iostream>

using namespace std;

int main()
{
        int d, year, month, day;
        cout << "Enter age(in no of days) : ";
        cin >> d;
        year = d / 365.25;
        d = d - (year * 365.25);
        month = d / 30.5;
        day = d - (int)(month * 30.5);
        cout << " Year : " << year << ", Month : " << month << ", Day : " << day;
        return 0;
}
