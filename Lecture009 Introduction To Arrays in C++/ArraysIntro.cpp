#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the Array" << endl;
    // Printing the Array
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}

int main()
{
    // Declaring an Array
    int number[15];
    // Accessing an Arrray
    cout << "Value at Index 12 is " << number[12] << endl;

    // Initialising an Array
    int second[3] = {5, 7, 11};
    cout << "Value at Index 2 is " << second[2] << endl;

    int third[15] = {2, 7};
    int n = 15;
    // printArray(third, 15);
    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of Third is " << thirdSize << endl;

    int fourth[10] = {0};
    int a = 10;
    // printArray(fourth, 10);

    int fifth[10] = {1};
    int b = 10;
    // printArray(fifth, 10);
    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of Fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    cout << "Printing the Array" << endl;
    // Print the Array
    for (int i = 0; i <= 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "Printing Done" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << "Everything is Fine" << endl;
}
