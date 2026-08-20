#include <iostream>
using namespace std;
int main()
{

    int evenCount = 0;
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    cout << "count :" << evenCount;

    return 0;
}