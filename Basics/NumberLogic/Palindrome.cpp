#include <iostream>
using namespace std;
int main()
{
    int num, original, digit, reverse = 0;
    cin >> num;
    original = num;
    while (num > 0)
    {

        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "Reverse:" << reverse << endl;
    if (original == reverse)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}