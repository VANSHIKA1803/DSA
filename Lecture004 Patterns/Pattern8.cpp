#include <iostream>
using namespace std;

int main (){
    
    /*
    int n;
    cin >> n;

    int row =1;
    while (row <= n){
        int col =1;
        int count = row;
        while (col<=row){
            cout << count;
            count=count +1;
            col++;
        }
        row++;
        cout <<endl;
    }
    */

    // Alternate for above question

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = row;
        while (col < row * 2)
        {
            cout << col << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}