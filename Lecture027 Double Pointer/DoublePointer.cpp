#include <iostream>
using namespace std;

void update(int **p2)
{

    // p2 = p2 + 1;
    // Kuch Change Hoga - NO

    // *p2 = *p2 + 1;
    // Kuch Change Hoga - YES

    **p2 = **p2 + 1;
    // Kuch Change Hoga - YES
}

int main()
{

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    /*
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;
    */

    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);

    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}