// CODE 360 - Number of occurrence

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int n, int x)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;

    while (s <= e)
    {
        if (x == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid]) // We have to go to right
        {
            s = mid + 1;
        }
        else if (x < arr[mid]) // We have to go to left
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int x)
{
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    int ans = -1;

    while (s <= e)
    {
        if (x == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (x > arr[mid]) // We have to go to right
        {
            s = mid + 1;
        }
        else if (x < arr[mid]) // We have to go to left
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
int count(vector<int> &arr, int n, int x)
{

    int l = lastOcc(arr, n, x);
    int f = firstOcc(arr, n, x);

    if (l == -1 && f == -1)
    {
        return 0;
    }
    else
        return l - f + 1;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int n = arr.size();
    int x = 2;

    int result = count(arr, n, x);
    cout << "The count of " << x << " in the array is: " << result << endl;

    return 0;
}