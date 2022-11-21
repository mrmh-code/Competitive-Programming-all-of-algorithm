#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int weight[n + 1], cost[n + 1], dp[n + 1][k + 1];

    for (int i = 1; i <= n; i++)
        cin >> weight[i];
    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (!i || !j)
            {
                dp[i][j] = 0;
                continue;
            }

            if (weight[i] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j - weight[i]] + cost[i], dp[i - 1][j]);
            }
        }
    }

    cout << dp[n][k] << endl;
}