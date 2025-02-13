// Leetcode problem 46 - Permutations

class Solution
{
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    {
        // Base Case
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, index + 1, ans);
            // Back tracking
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }
};