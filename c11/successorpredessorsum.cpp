//Program to find difference of sum of n successor and n predessor of a number.

#include <iostream>

using namespace std;

int main()
{
        int num, n, diff = 0;
        cout << "Enter the number : ";
        cin >> num;
        cout << "Enter the value of n : ";
        cin >> n;
        for(int i = 1 ; i <= n ; ++i)
        {
                diff += (2 * i);
        }
        cout << "Difference of sum of successor and predessor = " << diff;
        return 0;
}
