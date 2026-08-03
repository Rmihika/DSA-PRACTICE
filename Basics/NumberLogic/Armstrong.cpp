#include <iostream>
using namespace std; // 370
int main()
{
    int num, digit, sum = 0, original;
    cin >> num;
    original = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }
    if (sum == original)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}