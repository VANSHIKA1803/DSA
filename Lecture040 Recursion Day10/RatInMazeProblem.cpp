#include <bits/stdc++.h>

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &mat)
    {
        return (x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && mat[x][y] == 1;
    }

    void solve(vector<vector<int>> &mat, int n, int x, int y, vector<string> &ans, vector<vector<int>> &visited, string &path)
    {
        // Base Case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // 4 possible paths

        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('D');
            solve(mat, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('L');
            solve(mat, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('R');
            solve(mat, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, mat))
        {
            path.push_back('U');
            solve(mat, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &mat)
    {
        vector<string> ans;

        int n = mat.size(); // Initialize n according to the matrix size
        if (n == 0 || mat[0][0] == 0)
        {
            return ans;
        }

        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";

        solve(mat, n, srcx, srcy, ans, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};