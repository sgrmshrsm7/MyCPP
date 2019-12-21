//Program to print first n multiples of a number.

#include <iostream>

using namespace std;

int main()
{
        int number, n, i;
        cout << "Enter the number : ";
        cin >> number;
        cout << "Enter the value of n : ";
        cin >> n;
        cout << "First " << n << " multiples of " << number << " are : ";
        for(i = 1 ; i <= n ; ++i)
        {
                cout << number * i << " ";
        }
        return 0;
}
