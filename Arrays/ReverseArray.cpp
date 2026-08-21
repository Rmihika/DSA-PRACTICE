
// VISITING ARRAY BACKWARDS AND NOT REVERSING IT//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     for (int i = 4; i >= 0; i--)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int left = 0, right = 4, temp;
    int arr[] = {1, 2, 3, 4, 5};
    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}