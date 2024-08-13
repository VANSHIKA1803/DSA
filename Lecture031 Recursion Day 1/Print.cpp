#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Function
    // print(n - 1);
    // cout << n << endl;    Output: 1 2 3 4 5 if (n = 5)

    cout << n << endl;
    // Recursive Function
    print(n - 1); // Output: 5 4 3 2 1  if (n = 5)
}

int main()
{

    int n;
    cin >> n;

    cout << endl;
    print(n);

    return 0;
}