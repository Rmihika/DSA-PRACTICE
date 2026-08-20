#include <iostream>
using namespace std;
int main()
{

    int target;
    cin >> target;
    int arr[] = {7, 2, 9, 4, 8, 5};
    bool found = false;
    for (int i = 0; i < 6; i++)
    {

        if (arr[i] == target)
        {
            found == true;
        }
    }
    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}