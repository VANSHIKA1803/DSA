#include <iostream>
using namespace std;

// ---Sum 1 to n---

int main (){
    int n;
    cout << "Enter the value of n " <<endl;
    cin >> n;

    int sum = 0;
    int i = 1;

    while(i <= n){
        sum = sum + i;
        i++;
    }
    cout << sum;

}