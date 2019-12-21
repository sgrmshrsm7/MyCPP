//Program to calculate simple interest.

#include <iostream>

using namespace std;

int main()
{
        float p, r, t, i;
        cout << "Enter principle amount in Rs : ";
        cin >> p;
        cout << "Enter rate(in %) of interest per year : ";
        cin >> r;
        cout << "Enter time period in year : ";
        cin >> t;
        i = p * r * t / 100;
        cout << "Simple Interest = Rs " << i;
        return 0;
}
