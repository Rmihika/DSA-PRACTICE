#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "number is eveen";
    }
    else
    {
        cout << "number is odd";
    }

    return 0;
}