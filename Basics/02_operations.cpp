#include <iostream>
using namespace std;

int main()
{
    int a, b, s;
    cout << "enter two numbers:" << endl;
    cin >> a;
    cin >> b;

    cout << "Addition:" << a + b << endl;
    cout << "Subtraction:" << a - b << endl;
    cout << "Multiplication:" << a * b << endl;
    cout << "Division:" << a / b << endl;
    cout << "Remainder:" << a % b << endl;

    cout << "enter a number" << endl;
    cin >> s;
    cout << "Sqaure:" << s * s << endl;
    cout << "Cube:" << s * s * s;
}