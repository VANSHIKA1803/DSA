#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = count + arr[i];
    }
    return count;
}
int main()
{
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of all Elements of Array is " << sumArray(arr, n);
    return 0;
}