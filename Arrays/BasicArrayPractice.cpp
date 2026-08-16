#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{

    // DECLARATION
    // int number[15];
    // cout << number[11] << endl; // garbage value will be printed

    // cout << number[20] << endl; // accesing outside of the array size

    // // TO ACESS AN ELEMENT
    // int num[3] = {23, 45, 66};
    // cout << num[1] << endl;

    int arr[15] = {23, 44};
    int m = 14;
    printArray(arr, 14);
    for (int i = 0; i <= 14; i++)
    {
        cout << arr[i] << " "; // garbage value will be printed for the rest of the elements
    }
    cout << endl;

    int num[15] = {1};
    int n = 15;
    printArray(num, 15);
    for (int i = 0; i < 15; i++)
    {
        cout << num[i] << " ";
    } // 1 will be printed for the first element and
    cout << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;
}
