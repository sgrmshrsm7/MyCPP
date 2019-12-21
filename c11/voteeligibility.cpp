//Program to check eligibility of a person to vote in India according to his age and country code. Person can only vote is age is above 18. Contry code of India = I.

#include <iostream>

using namespace std;

int main()
{
        int age;
        char countrycode;
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter country code : ";
        cin >> countrycode;
        if(age >= 18 && countrycode == 'I')
                cout << "Person can vote in India";
        else
                cout << "Person can not vote in India";
        return 0;
}
