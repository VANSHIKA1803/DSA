#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int row = 1;
    
    while (row <= n){
        char ch = 'A' + n - row;
        int col =1;

        while(col <= row)
        {
        cout << ch;
        ch = ch +1;
        col++;
        }
        row++;
        cout <<endl;
    }
    
}