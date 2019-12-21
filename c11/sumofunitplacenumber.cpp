//Program to form a number by sum of unit place digit of 3 numbers and check it's divisibility by 4.

#include <iostream>

using namespace std;

int main()
{
        int n1, n2, n3, u;
        cout << "Enter first number : ";
        cin >> n1;
        cout << "Enter second number : ";
        cin >> n2;
        cout << "Enter third number : ";
        cin >> n3;
        u = (n1 % 10) + (n2 % 10) + (n3 % 10);
        if(u % 4 == 0)
                cout << "Sum of unit place digit of numbers is divisible by 4.";
        else
                cout << "Sum of unit place digit of numbers is not divisible by 4.";
        return 0;
}
