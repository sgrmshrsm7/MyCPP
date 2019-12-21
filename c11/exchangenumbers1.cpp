//Program to exchange 2 numbers.

#include <iostream>

using namespace std;

int main()
{
        int a, b;
        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "Exchanged first number is : " << a << endl;
        cout << "Exchanged second number is : " << b;
        return 0;
}
