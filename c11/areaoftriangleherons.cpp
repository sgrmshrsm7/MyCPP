//Program to calculate area of triangle with given sidelengths.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
        float a, b, c, s, area;
        cout << "Enter first sidelength : ";
        cin >> a;
        cout << "Enter second sidelength : ";
        cin >> b;
        cout << "Enter third sidelength : ";
        cin >> c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the triangle = " << area;
        return 0;
}
