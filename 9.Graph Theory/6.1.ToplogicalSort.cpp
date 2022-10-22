#include <bits/stdc++.h>
using namespace std;

void add(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void topoLogical(int val, stack<int> &st, vector<int> adj[], vector<int> &visited)
{
    visited[val] = 1;
    for (auto u : adj[val])
    {
        if (!visited[u])
        {
            topoLogical(u, st, adj, visited);
        }
    }

    st.push(val);
}

void topoLogicalSort(vector<int> adj[], int n)
{
    stack<int> st;
    vector<int> visited(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            topoLogical(i, st, adj, visited);
        }
    }

    vector<int> vec;

    while (!st.empty())
    {
        vec.push_back(st.top());
        st.pop();
    }

    for (auto u : vec)
    {
        cout << u << " ";
    }
}

// 0 1
// 1 2
// 2 3
// 0 1 2 3
int main()
{
    int v, e;
    cin >> v >> e;

    vector<int> adj[v];

    int a, b;
    for (int i = 1; i < v; i++)
    {
        cin >> a >> b;
        add(adj, a, b);
    }
    topoLogicalSort(adj, v);
}
