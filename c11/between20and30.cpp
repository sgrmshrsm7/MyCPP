//Program to check whether a number is between 20 and 30 or not.

#include <iostream>

using namespace std;

int main()
{
        int number;
        cout << "Enter the number : ";
        cin >> number;
        if(number > 20 && number < 30)
                cout << "Number lies between 20 and 30";
        else
                cout << "Number doesn't lie between 20 and 30";
        return 0;
}
