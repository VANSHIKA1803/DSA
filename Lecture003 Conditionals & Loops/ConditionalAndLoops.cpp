#include <iostream>
using namespace std;

int main()
{
    /*

    // a is positive
    int a;
    cin >> a;

    if (a > 0)
    {
        cout << "a is positive";
    }
    else
    {
        cout << "a is negative";
    }


    // ----a is greater than b or not------//
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    if (b > a)
    {
        cout << "b is greater than a" << endl;
    }
    */


    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;

    if (a > 0)
    {
        cout << " a is positive number";
    }
    else
    {
        if (a < 0)
        {
            cout << " a is negative number";
        }
        else
        {
            cout << "a is zero";
        }
    }

    // alternate code for this
    if (a > 0)
    {
        cout << " a is positive number" << endl;
    }
    else if (a < 0)
    {
        cout << " a is negative number" << endl;
    }
    else
    {
        cout << "a is zero";
    }
    
}
