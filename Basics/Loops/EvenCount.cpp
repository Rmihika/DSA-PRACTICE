#include <iostream>
using namespace std;
int main()
{
    int num, evenCount = 0, digit;
    cin >> num;
    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            evenCount++;
        }
        num = num / 10;
    }

    cout << "Even Count:" << evenCount;

    return 0;
}