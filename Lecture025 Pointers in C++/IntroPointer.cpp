#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << "Value of num is " << num << endl;

    int *ptr = &num;

    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is: " << p2 << endl;
    cout << "Value is: " << *p2 << endl;

    cout << "Size of Integer is: " << sizeof(num) << endl;
    cout << "Size of Pointer *ptr is: " << sizeof(*ptr) << endl;
    cout << "Size of Pointer *p2 is: " << sizeof(*p2) << endl;
}