//Program to find sum of digits of a number

#include <iostream>

using namespace std;

int main()
{
        int number, n, sum = 0;
        cout << "Enter the number : ";
        cin >> number;
        n = number;
        while (n != 0) {
                sum += n % 10;
                n /= 10;
        }
        cout << "Sum of digits of " << number << " is : " << sum;
        return 0;
}
