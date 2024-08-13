#include <iostream>
using namespace std;

int main()
{
    /*
    int a = 9;
    if (a == 9)
    {
        cout << "NINEY" << endl;
    }
    if (a > 0)
    {
        cout << "A is Positive" << endl;
    }
    else
    {
        cout << "A is Negative" << endl;
    }


    int a = 2;
    int b = a + 1;
    if ((a == 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }


    int a = 24;
    if (a > 20)
    {
        cout << "Love" << endl;
    }
    else if (a == 24)
    {
        cout << "Lovely" << endl;
    }
    else
    {
        cout << "babbar" << endl;
    }
    cout << a;


    char a;
    cin >> a;

    if (a >= 'a' && a <= 'z')
    {
        cout << "This is lowercase" << endl;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << " This is uppercase" << endl;
    }
    else if (0 < a < 9)
    {
        cout << " This is number" << endl;
    }
    */


    // ------While Loop-----
    // Sum of 1 to n even no
    int n;
    cout << "Enter tha value of n:" << endl;
    cin >> n;
    int i = 2;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Value of sum is: " << sum << endl;


   
}