//Program to take %age of a student and print grade. Above 90 - A grade, 80 to 89 - B grade, 70 to 79 - C grade, below 69 - F grade.

#include <iostream>

using namespace std;

int main()
{
        int percentage;
        cout << "Enter %age marks : ";
        cin >> percentage;
        if(percentage >= 90)
                cout << "A grade";
        else if(percentage >= 80)
                cout << "B grade";
        else if(percentage >= 70)
                cout << "C grade";
        else
                cout << "F grade";
        return 0;
}
