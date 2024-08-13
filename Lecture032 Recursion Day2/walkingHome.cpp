#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    cout << "Source " << src << " Destination " << dest << endl;
    if (src == dest)
    {
        cout << "Reached " << endl;
        return;
    }
    // Processing - ek step aage bdta jaa
    src++;
    // Recrusive call
    reachHome(src, dest);
}

int main()
{

    int src = 1, dest = 10;

    cout << endl;
    reachHome(src, dest);

    return 0;
}