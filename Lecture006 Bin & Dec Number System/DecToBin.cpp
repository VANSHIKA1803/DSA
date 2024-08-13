#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;
    
    while (n!=0){
        int bit = (n & 1);
        int answer = ((bit * pow(10,1)) + answer);

        n = n>>1;
        i++;
       
    }
    cout << "Answer is: " << answer <<endl;
}