#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % 1 == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "It is a Prime Number" << endl;
    }
    else
    {
        cout << "It is not a Prime Number" << endl;
    }

    return 0;
}
