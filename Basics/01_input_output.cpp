#include <iostream>
using namespace std;

int main()
{
    int age;
    char name[6];

    cout << "enter your name:" << endl;
    cin >> name;

    cout << "enter your age:" << endl;
    cin >> age;

    cout << "Hello " << name << "!" << endl
         << "Your are " << age << " years old";
}