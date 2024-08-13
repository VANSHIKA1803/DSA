#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s; // Work on the Principle of First In Last Out or Last In First Out

    s.push("Deepak");
    s.push("Tiwari");
    s.push("Student");

    cout << "Printing the top element --> " << s.top() << endl;
    s.pop();
    cout << "Printing the top element --> " << s.top() << endl;

    cout << " Size of Stack --> " << s.size() << endl;
    cout << " Empty or not  --> " << s.empty() << endl;
}