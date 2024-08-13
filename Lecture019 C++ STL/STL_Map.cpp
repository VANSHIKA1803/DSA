
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Deepak";
    m[2] = "Tiwari";
    m[7] = "Student";

    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 5 --> " << m.count(5) << endl;

    m.erase(7);
    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(1);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}