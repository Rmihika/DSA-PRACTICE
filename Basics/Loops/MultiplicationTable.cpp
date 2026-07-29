#include <iostream>
using namespace std;
int main()
{
    int n = 7, result;
    for (int i = 1; i <= 10; i++)
    {
        result = n * i;
        cout << n << "x" << i << "=" << result << endl;
    }
}