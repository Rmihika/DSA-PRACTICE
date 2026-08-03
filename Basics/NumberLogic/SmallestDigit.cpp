#include <iostream>
using namespace std;
int main()
{
    int num, digit, smallest = 9;
    cin >> num;
    while (num > 0)
    {

        digit = num % 10; // 4
        if (digit < smallest)
        {
            smallest = digit;
        }
        num = num / 10; // 12473
    }
    cout << smallest;

    return 0;
}