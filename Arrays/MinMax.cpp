#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum element in the array is: " << getMax(num, size) << endl;
    // cout << "Minimum element in the array is: " << getMin(num, size) << endl;
    return 0;
}