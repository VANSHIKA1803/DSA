# include <iostream>
using namespace std ;

// ---- n is prime or not---

int main (){
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int i = 2;
    while (i < n){
        if (n%i==0){
            cout << "Not Prime" << endl;
        }
        else {
            cout << "Prime for " << i <<endl;
        }
        i++;
    }
}
