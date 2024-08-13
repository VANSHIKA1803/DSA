#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    // Prints the entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; // this will stop printing when it finds a nullcharacter (\0)
}