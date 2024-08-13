#include <iostream>
using namespace std;

// -----Printing 1 to n----

int main (){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int num = 1;
    while (num <= n)
    {
        cout << num << endl;
        num ++;
    }
}
