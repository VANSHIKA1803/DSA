#include <iostream>
using namespace std;

void dummy(int n)
{
    n++; // There is no connection between this n and other n in main function. This n is a copy of main function's n.
    cout << "n is " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);
    cout << "Number is " << n << endl;

    return 0;
}