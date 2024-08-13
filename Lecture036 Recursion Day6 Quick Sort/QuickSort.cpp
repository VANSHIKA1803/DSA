#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // Place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // Maintainig and Sorting the left and right part
    int i = 0, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    // Partition krenge
    int p = partition(arr, s, e);

    // Left side sort krenge
    quickSort(arr, s, p - 1);

    // Right side sort krenge
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}