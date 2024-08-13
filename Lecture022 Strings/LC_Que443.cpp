// Leetcode problem 443 - String Compression

#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0, k = 0;
        while (i < chars.size())
        {
            int count = 1, j = i + 1;
            while (j < chars.size() && chars[j] == chars[i])
            {
                count++;
                j++;
            }
            chars[k++] = chars[i];
            if (count > 1)
            {
                string cnt = to_string(count);
                for (char ch : cnt)
                    chars[k++] = ch;
            }
            i = j;
        }
        return k;
    }
};