//Program to find area of triangle with given altitude and base length.

#include <iostream>

using namespace std;

int main()
{
        float a, b, area;
        cout << "Enter altitude length : ";
        cin >> a;
        cout << "Enter base length : ";
        cin >> b;
        area = (a * b) / 2.0;
        cout << "Area of triangle is : " << area;
        return 0;
}
