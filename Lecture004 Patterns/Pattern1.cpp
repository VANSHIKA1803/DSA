#include <iostream>
using namespace std;

int main()
{
    //---- 3*3 star pattern ----//
   int n;
   cin >>n;

   int i =1;
   while (i<=n)
   {
    int j=1;
    while (j<=n){
        cout <<"*";
        j = j+1;
    }
    cout <<endl;
    i++;
   } 
}