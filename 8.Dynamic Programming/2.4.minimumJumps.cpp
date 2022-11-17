#include <bits/stdc++.h>
using namespace std;

int mini_jumps(vector<int> arr, int n, vector<int> dp, int i)
{
    if (i == n - 1)
    {
        return 0;
    }

    if (i >= n)
    {
        return INT_MAX;
    }

    if (dp[i] != 0)
    {
        return dp[i];
    }

    int steps = INT_MAX;
    int max_jumps = arr[i];

    for (int jump = 1; jump <= max_jumps; jump++)
    {
        int next_cell = i + jump;

        int sub = mini_jumps(arr, n, dp, next_cell);

        if (sub != INT_MAX)
        {
            steps = min(steps, sub + 1);
        }
    }

    return dp[i] = steps;
}

int main()
{
    vector<int> arr = {3, 4, 2, 1, 2, 3, 7, 1, 1, 3};
    int n = arr.size();

    vector<int> dp(n, 0);

    cout << mini_jumps(arr, n, dp, 0) << endl;
}