#include <iostream>
using namespace std;

//---- 111222333 pattern ----//

int main(){
    int n;
    cin >> n;
    int i = 1;

    while (i<=n){
        int j = 1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}