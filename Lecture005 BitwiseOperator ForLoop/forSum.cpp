#include <iostream>;
using namespace std;

//------printing sum of 1 to n number-------//

int main (){
    
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int sum = 0;
    for (int i = 1 ; i <= n; i++){
        sum = sum +i;
    }
    cout << "Sum is: " << sum << endl;
}
