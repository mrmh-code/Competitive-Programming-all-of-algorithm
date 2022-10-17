#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
int a[N];

struct query
{
    int l, r, ans, id, block;
    bool operator<(query P) const
    {
        return make_pair(this->block, r) < make_pair(P.block, P.r);
    }
} Q[N];

int main()
{
    int n, m, q;
    cin >> n;
    m = sqrt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> Q[i].l >> Q[i].r;
        Q[i].l--;
        Q[i].r--;
        Q[i].id = i, Q[i].block = Q[i].l / m;
    }

    sort(Q, Q + q);

    for (int i = 0; i < q; i++)
    {
        cout << Q[i].id << " " << Q[i].l << " " << Q[i].r << endl;
    }
}