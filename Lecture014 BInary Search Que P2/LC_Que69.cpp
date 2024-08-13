// Finding Square Root of a number

class Solution
{
public:
    long long binarySearch(int x)
    {
        int s = 0;
        int e = x;
        long long mid = s + (e - s) / 2;
        long long ans = 0;

        while (s <= e)
        {
            long long int square = mid * mid;

            if (square == x)
            {
                return mid;
            }
            if (square < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    int mySqrt(int x)
    {
        return binarySearch(x);
    }
};