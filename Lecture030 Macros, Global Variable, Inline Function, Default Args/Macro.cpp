#include <iostream>
using namespace std;

// Created a Macro named PI
# define PI 3.14

int main() {

    int r = 10;
    double Area = PI * r*r;

    cout << "Area is --> " << Area << endl;
    
    return 0;
}