#include <iostream>
using namespace std;

int main()
{
    /*
    int num = 1;
    cout << endl;

    switch (num)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        cout << "Character One" << endl;
        break;

    default:
        cout << "This is default case" << endl;
    }
    cout << endl;
    return 0;
    */

    // Ese hi Char use krke dekhte hai

    char ch = '1';
    cout << endl;

    switch (ch)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        cout << "Character One" << endl;   // Here the value of char ch is matched with case '1' thats why Character One is printed
        break;

    default:
        cout << "This is default case" << endl;
    }
    cout << endl;
    return 0;  

    /*   Important Notes
        1. If no case match then switch will directly go to the default case and default case will print
        2. If there is no default case present then code will execute and nothing will print
        3. If we will not use break then further things will get print so we have to used break to get out from the case printing the case 
    */
}