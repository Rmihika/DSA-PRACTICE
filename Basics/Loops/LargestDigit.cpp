#include <iostream>
using namespace std; // 124734
int main()
{
    int num, digit, largest = 0;
    cin >> num;
    while (num > 0)
    {

        digit = num % 10; // 4
        if (digit > largest)
        {
            largest = digit;
        }
        num = num / 10; // 12473
    }
    cout << largest;

    return 0;
}