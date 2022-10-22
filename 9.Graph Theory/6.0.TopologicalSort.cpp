#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int count = 0;
    vector<vector<int>> adj(n);
    vector<int> inDeg(n, 0);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        inDeg[v]++;
    }

    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (inDeg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        count++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";

        for (auto u : adj[x])
        {
            inDeg[u]--;
            if (inDeg[u] == 0)
            {
                pq.push(u);
            }
        }
    }
}