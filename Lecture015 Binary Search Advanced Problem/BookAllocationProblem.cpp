// CODE 360 - Book Allocation Problem

#include <vector>
using namespace std;

bool isposible(vector<int> &pages, int n, int b, int mid)
{
    int studentcount = 1; // initialize student as 1
    int pagesum = 0;      // this will cpunt the page sum the student gets

    for (int i = 0; i < n; i++)
    {
        if (pagesum + pages[i] <= mid)
        {
            pagesum += pages[i];
        }
        else
        {
            studentcount++;
            if (studentcount > b || pages[i] > mid)
            {
                return false;
            }
            pagesum = pages[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> &pages, int n, int b)
{

    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += pages[i];
    }

    int end = sum;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (isposible(pages, n, b, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else if (b > n)
        {
            return -1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}