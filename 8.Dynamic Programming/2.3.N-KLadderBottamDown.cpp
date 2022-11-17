#include <bits/stdc++.h>
using namespace std;

int countWays(int n, int k)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                dp[i] += dp[i - j];
            }
        }
    }

    return dp[n];
}

// Bottom up optimize (O(N+K))

int countWaysOP(int n, int k)
{
    vector<int> dp(n + 1, 0);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= k; i++)
    {
        dp[i] = 2 * dp[i - 1];
    }

    for (int i = k + 1; i <= n; i++)
    {
        dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
    }

    return dp[n];
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << countWays(n, k) << endl;
    cout << countWaysOP(n, k) << endl;
}
