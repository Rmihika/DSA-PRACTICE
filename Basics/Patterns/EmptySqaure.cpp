#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        // for each row -> 6 columns
        for (int col = 1; col <= 6; col++)
        {
            if (row == 1 || row == n)
            {
                cout << "*";
            }
            else if (col == 1 || col == 6)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
