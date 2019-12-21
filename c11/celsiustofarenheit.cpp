//Program to convert temperature in celsius to temperature in farenheit.

#include <iostream>

using namespace std;

int main()
{
        float c, f;
        cout << "Enter temperature in celsius : ";
        cin >> c;
        f = (9 * c / 5) + 32;
        cout << "Temperature in farenheit is : " << f;
        return 0;
}
