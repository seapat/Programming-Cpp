// Sean Klein

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Formula to be solved: ax^2 + bx + c = 0 " << endl;

    cout << "Enter a number for a: ";
    cin >> a;
    cout << "Enter a number for b: ";
    cin >> b;
    cout << "Enter a number for c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Invalid number: division by zero";
    }
    else
    {
        cout << "Your result is: " << endl;
        cout << "x_1 = " << ((-1 * b) + sqrt(b * b - 4 * a * c) / (2 * a)) << endl;
        cout << "x_2 = " << ((-1 * b) - sqrt(b * b - 4 * a * c) / (2 * a)) << endl;
    };
};
