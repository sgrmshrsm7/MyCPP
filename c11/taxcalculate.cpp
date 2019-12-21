//Program to enter basic salary of an employee and calculate net tax to be payed on gross yearly salary. Gross salary = basic salary + HRA + DA + TA. HRA = 20% of basic salary. DA = 65% of basic salary. TA = 10% of basic salary. If gross is less than 2lakh then tax = 0. If gross is 2lakh to 4lakh then tax = 10%. If gross is 4lakh to 7lakh then tax = Rs 2500 + 15%. If gross is greater than 7lakh then tax = Rs 5000 + 20%.

#include <iostream>

using namespace std;

int main()
{
        float basic, hra, da, ta, gross, t;
        cout << "Enter basic salary of the person in Rs(in thousand) : ";
        cin >> basic;
        hra = 0.2 * basic;
        da = 0.65 * basic;
        ta = 0.1 * basic;
        gross = basic + hra + da + ta;
        if(gross < 200)
                t = 0;
        else if(gross < 400)
                t = 0.1 * gross;
        else if(gross < 700)
                t = 2.5 + 0.15 * gross;
        else
                t = 5 + 0.2 * gross;
        cout << "Net tax to be paid = Rs " << t <<" thousand";
        return 0;
}
