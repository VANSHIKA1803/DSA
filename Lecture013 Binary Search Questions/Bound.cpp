// CODE 360 - Que- First and Last Occurrence of an Element in an Array

#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // We have to go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // We have to go to left
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}

int LastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // We have to go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // We have to go to left
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}

int main()
{
    int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurrence of 3 is at Index " << FirstOcc(even, 10, 3) << endl;
    cout << "last Occurrence of 3 is at Index " << LastOcc(even, 10, 3) << endl;

    return 0;
}