#include <iostream>
using namespace std;

// 1 --> Prime no.      // 0 --> Not a Prime no.
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        // If divided then not a prime number
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Is a Prime Number " << endl;
    }
    else
    {
        cout << "Not a Prime Number " << endl;
    }
}