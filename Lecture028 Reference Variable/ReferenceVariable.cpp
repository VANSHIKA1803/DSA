#include <iostream>
using namespace std;

// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// int *fun(int n)
// {
//     int *ptr = &n;
//     return ptr;
// }

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{

    // int i = 10;

    // // Creating a Reference Variable
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // i++;
    // cout << j << endl;

    int n = 5;

    cout << n << endl;
    update2(n);
    cout << n << endl;

    // func(n);
    // fun(n);

    return 0;
}