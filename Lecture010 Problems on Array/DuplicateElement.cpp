
// CODE 360 PROBLEM --- Find Duplicate (Finding duplicate element of an Array)

/*

    Time complexity: O(N * log(N))
    Space complexity: O(1)

    Where N is the length of the array.

*/

#include <algorithm>
using namespace std;

int findDuplicate(vector<int> &arr, int n)
{

    // Sort the elements of the array.
    sort(arr.begin(), arr.end());

    // Traverse through the array to check if two consecutive elements are equal.
    for (int i = 0; i < n - 1; i++)
    {

        // Duplicate element found.
        if (arr[i] == arr[i + 1])
        {

            // Return the duplicate element.
            return arr[i];
        }
    }
    return -1;
}