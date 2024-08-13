#include <iostream>
using namespace std ;

//---- 123412341234 pattern ----//

int main (){
    int n;
    cin >>n;
    int i=1;
    while (i<=n){
        int j = 1;
        while (j<=n){
            cout << j;
            j++;
        }
        i++;
        cout <<endl;
    }
}