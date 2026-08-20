#include <iostream>
using namespace std;
int main()
{

    int sum = 0;
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
    }

    cout << "sum is:" << sum;

    return 0;
}