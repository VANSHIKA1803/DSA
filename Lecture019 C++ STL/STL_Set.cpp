#include <iostream>
#include <set>
using namespace std;

int main()
{

    // In a Set only unique elements can be stored. e.g. if we insert an element 5 times in a set then only that element will be stores only once
    // No Odification is allowed after inserting an element. Only Insertion and Deletion is allowed
    // Elements are returned in sorted order

    // Unordered Set is faster than Set, Elements in Unordered Set are not sroted they are returned in random order

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "5 is Present or not -> " << s.count(5) << endl; // Count functions tell us about element prrsent or not
    cout << "-5 is Present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}