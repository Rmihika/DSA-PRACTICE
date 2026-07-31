#include <iostream>
using namespace std;
int main()
{
    int num = 12345;
    while (num > 0)
    {
        cout << num % 10;
        num = num / 10;
    }
}