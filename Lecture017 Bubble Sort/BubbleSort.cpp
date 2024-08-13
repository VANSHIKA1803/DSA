#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    { // We can also take: "int i=0; i<n-1"  this condition
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        { // If we take "int i=0; i<n-1" then we have to use "j<n-i-1"
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}