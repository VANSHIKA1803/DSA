#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5, 1); // Here we already know the size that is 5 and whole vector is intialised by 1

    vector<int> last(a); // Here we are copying all the elements of vector a to new vector last
    cout << "Print last " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl; // Memory of Vector is capacity
    cout << "Size --> " << v.size() << endl;         // Elements in Vector is Size

    cout << "Element at 2nd Index is " << v.at(2) << endl;

    cout << "First element --> " << v.front() << endl;
    cout << "Last element --> " << v.back() << endl;

    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear " << v.size() << endl;
    v.clear();
    cout << "After Clear " << v.size() << endl;
}
