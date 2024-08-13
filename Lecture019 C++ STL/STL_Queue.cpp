#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q; // Work on the Principle of First In First Out or Last In Last Out

    q.push("Deepak");
    q.push("Tiwari");
    q.push("Student");

    cout << " Size before pop --> " << q.size() << endl;
    cout << "Printing the top element --> " << q.front() << endl;
    q.pop();
    cout << "Printing the top element --> " << q.front() << endl;
    cout << " Size after pop --> " << q.size() << endl;
    cout << " Empty or not  --> " << q.empty() << endl;
}