//Program to check whether input number is divisible by any one of 3 or 7 or not.

#include <iostream>

using namespace std;

int main()
{
        int number;
        cout << "Enter the number : ";
        cin >> number;
        if(number % 3 == 0 || number % 7 == 0)
                cout << "Number is divisible by atleast one of 3 and 7";
        else
                cout << "Number is neither divisible by 3 nor 7";
        return 0;
}
