#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // Rather than using mid = ((start + end)/2)  -we are using this formula for optimised results
    // Using above formula can lead to error because for some value value of ((start + end)/2) will be out of range of integer
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }
        // Go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Go to left part
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int even[8] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 8, 6);
    cout << "Intex of 6 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);
    cout << "Index of 14 is : " << oddIndex << endl;

    return 0;
}