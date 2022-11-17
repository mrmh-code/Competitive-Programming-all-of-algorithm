#include <bits/stdc++.h>
using namespace std;

int countWayTopDown(int n, int k, int dp[])
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = 0;

    for (int i = 1; i <= k; i++)
    {
        ans += countWayTopDown(n - i, k, dp);
    }

    return dp[n] = ans;
}

int main()
{
    int n, k, dp[1000] = {0};
    cin >> n >> k;

    cout << countWayTopDown(n, k, dp);
}