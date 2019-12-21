//Program to calculate average of 3 numbers.

#include <iostream>

using namespace std;

int main()
{
        float a, b, c, avg;
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
        cout << "Enter third number : ";
        cin >> c;
        avg = (a + b + c) / 3;
        cout << "Average of the 3 numbers = " << avg;
        return 0;
}
