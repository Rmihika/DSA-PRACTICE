#include <iostream>
using namespace std;
int main()
{
    int n = 30;
    for (int i = 5; i <= n; i = i + 5)
    {
        if (n % i == 0)
        {
            cout << i;
        }
    }

    return 0;
}