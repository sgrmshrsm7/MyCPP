//Program to enter 2 numbers and check whether both numbers are even or not.

#include <iostream>

using namespace std;

int main()
{
        int a, b, flag = 1;
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
        if(a % 2 != 0)
                flag = 0;
        else if(b % 2 != 0)
                flag = 0;
        if(flag == 1)
                cout << "Both numbers are even";
        else
                cout << "Atleast one number is odd";
        return 0;
}
