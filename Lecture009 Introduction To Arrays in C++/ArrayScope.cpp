#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the Function " << endl;

    arr[0] = 120;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going back to the Main Function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // Printing the Array
    cout << "Printing in Main Function " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}