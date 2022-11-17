#include <bits/stdc++.h>
using namespace std;

int GFib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return GFib(n - 1) + GFib(n - 2);
}

int fib(int n)
{
    int dp[n + 1] = {0};
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int N;
    cin >> N;

    cout << fib(N) << endl;
    cout << GFib(N) << endl;
}