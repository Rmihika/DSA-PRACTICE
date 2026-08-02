#include <iostream>
using namespace std; // 1234
int main()
{
    int num, digit, product = 1;
    cin >> num;
    while (num > 0)
    {

        digit = num % 10; // 4
        product = product * digit;
        num = num / 10; // 123
    }
    cout << product;

    return 0;
}