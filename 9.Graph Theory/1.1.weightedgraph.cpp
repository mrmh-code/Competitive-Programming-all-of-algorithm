#include <bits/stdc++.h>
using namespace std;

const int cmx = 1e5 + 300;
vector<pair<int, int>> adj[cmx];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Adjacent List of " << i << " : "
             << ": ";
        for (auto u : adj[i])
        {
            cout << "Node : " << u.first << " And "
                 << "Cost :" << u.second << " ";
        }

        cout << endl;
    }

    return 0;
}