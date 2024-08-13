#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    int i = 1;
    while (i != n)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            i--;
        }
        else
        {
            i++;
        }
    }
}