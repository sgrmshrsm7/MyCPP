//Program to calculate area and circumference of a circle of given radius.

#include <iostream>

#define pi 3.1415926535898

using namespace std;

int main()
{
        float r, c, a;
        cout << "Enter radius of the circle : ";
        cin >> r;
        c = 2 * pi * r;
        a = pi * r * r;
        cout << "Circumference of circle is : " << c << endl;
        cout << "Area of circle is : " << a;
        return 0;
}
