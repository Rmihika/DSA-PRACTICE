#include <iostream>
using namespace std;
int main()
{

    int arr[] = {7, 2, 9, 3, 8, 5};
    int largest = arr[0];
    int secondlargest = arr[1];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "Second_largest:" << secondlargest;

    return 0;
}