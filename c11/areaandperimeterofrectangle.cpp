//Program for calculating area and perimeter of a rectange with given length and breadth.

#include <iostream>

using namespace std;

int main()
{
        float l, b, p, a;
        cout << "Enter length of rectange : ";
        cin >> l;
        cout << "Enter breadth of rectange : ";
        cin >> b;
        p = 2 * (l + b);
        a = l * b;
        cout << "Perimeter of the rectange is : " << p << endl;
        cout << "Area of the rectange is : " << a << endl;
        return 0;
}
