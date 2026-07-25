#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl;
    int array[5] = {13, 33, 55, 89};
    cout << "enter value for 5th posn:" << endl;
    cin >> array[4];
    cout << "value entered is:" << array[4];
    cout << "entire array:" << array;
}
