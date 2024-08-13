#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the value of y: " << endl;
    cin >> y;

    char op;
    cout << "Enter the Operation you want to perform: " << endl;
    cin >> op;  

    switch( op ){
        case '+': cout << (x + y) << endl;
                  break;

        case '-': cout << (x - y) << endl;
                  break;

        case '*': cout << (x * y) << endl;
                  break;

        case '/': cout << (x / y) << endl;
                  break;

        case '%': cout << (x % y) << endl;
                  break;
        default: cout << "Enter a Valid Operation" <<endl;
    }
    return 0;
}