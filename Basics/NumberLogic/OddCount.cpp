#include <iostream>
using namespace std;
int main()
{
    int num, oddCount = 0, digit;
    cin >> num;
    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            oddCount++;
        }
        num = num / 10;
    }

    cout << "Odd Count:" << oddCount;

    return 0;
}