#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    // BITWISE OPERATOR

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a ^ b) << endl;

    // LEFT-SHIFT & RIGHT-SHIFT OPERATOR

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    // PRE/POST INCREMENT/DECREMENT

    int i = 7;

    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
}
