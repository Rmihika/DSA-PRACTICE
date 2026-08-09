#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "please enter your marks:";
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "Excellant";
    }
    else if (marks >= 75 && marks <= 89)
    {
        cout << "Very Good";
    }
    else if (marks >= 60 && marks <= 74)
    {
        cout << "Good";
    }
    else if (marks >= 35 && marks <= 59)
    {
        cout << "Pass";
    }
    else if (marks >= 0 && marks <= 35)
    {
        cout << "fail";
    }

    return 0;
}