#include <iostream>
using namespace std;

void Print(int arr[], int n)
{
    cout << "Size of Array is" << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {1, 5, 3, 7, 6};
    int size = 5;
    int key = 6;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is Absent" << endl;
    }
}