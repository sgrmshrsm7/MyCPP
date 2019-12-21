//Program to check entered character is lowercase alphabet or uppercase alphabet or digit or space or special character.

#include <iostream>

using namespace std;

int main()
{
        char c;
        cout << "Enter the character : ";
        cin >> c;
        if(c >= 48 && c <= 57)
                cout << "Character is a digit";
        else if(c >=65 && c <= 90)
                cout << "Character is an uppercase alphabet";
        else if(c >= 97 && c <= 122)
                cout << "Character is a lowercase alphabet";
        else if(c == ' ')
                cout << "Character is a space";
        else
                cout << "Character is a special character";
        return 0;
}
