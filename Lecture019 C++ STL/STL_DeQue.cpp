#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(1);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // For removing element from last index
    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // For removing element from first index
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "Element at 1st index is --> " << d.at(1) << endl;

    cout << "First element --> " << d.front() << endl;
    cout << "Last element --> " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "Before Erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}