//Program to check whether number is even or odd.

#include <iostream>

using namespace std;

int main()
{
        int number;
        cout << "Enter the number : ";
        cin >> number;
        if(number % 2 == 0)
                cout << "Number is even";
        else
                cout << "Number is odd";
        return 0;
}
