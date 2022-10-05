#include <bits/stdc++.h>
using namespace std;

vector<int> subSetSum(vector<int> s)
{
    int n = s.size();

    vector<int> result;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += s[j];
            }
        }

        result.push_back(sum);
    }

    return result;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> left, right;

    for (int i = 0; i < n; i++)
    {
        if (i <= n / 2)
            left.push_back(vec[i]);
        else
            right.push_back(vec[i]);
    }

    vector<int> left_sum = subSetSum(left);
    vector<int> right_sum = subSetSum(right);

    sort(right_sum.begin(), right_sum.end());
    int ans = 0;

    for (auto u : left_sum)
    {
        ans += upper_bound(right_sum.begin(), right_sum.end(), b - u) -
               lower_bound(right_sum.begin(), right_sum.end(), a - u);
    }

    cout << ans << endl;
}