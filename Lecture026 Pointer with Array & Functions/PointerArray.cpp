#include <iostream>
using namespace std;

int main()
{
    /*
    int arr[10] = {23, 122, 41, 67};

    cout << "Address of First Element is: " << arr << endl;     // Here we will get the address of first index
    cout << arr[0] << endl;                                     // Here we will get the value of the first index
    cout << "Address of First Element is: " << &arr[0] << endl; // Here also we will get the address of first index and we can use any of the thing

    cout << " 4th " << *arr << endl;
    cout << " 5th " << *arr + 1 << endl;
    cout << " 6th " << *(arr + 1) << endl;
    cout << " 7th " << *(arr) + 1 << endl;
    cout << " 8th " << arr[2] << endl;
    cout << " 9th " << *(arr + 2) << endl;

    int i = 3;
    cout << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << " 1st " << sizeof(*temp) << endl;
    cout << " 2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;


    int a[20] = {1, 2, 3, 4, 5};
    cout << "-->" << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *ptr = &a[0];
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << "-->" << &ptr << endl;
    */

    int arr[10];
    // This will give an error we cannot just perform arr = aar + 1;
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}