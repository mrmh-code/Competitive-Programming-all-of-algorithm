#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> vec, int sv)
{
    int n = vec.size();
    vector<bool> visited(n, false);
    vector<int> dist(n, 0);
    vector<int> parent(n);

    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
    queue<int> q;
    q.push(sv);

    parent[sv] = sv;
    dist[sv] = 0;
    visited[sv] = true;

    while (!q.empty())
    {
        int cv = q.front();
        q.pop();
        // cout<<cv<<endl;

        for (int i = 0; i < n; i++)
        {
            if (vec[cv][i] == 1 && visited[i] == false)
            {
                q.push(i);
                parent[i] = cv;
                dist[i] = dist[cv] + 1;
                visited[i] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Shortest dis to " << i << "  is " << dist[i] << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for (int i = 0; i < e; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        matrix[n1][n2] = 1;
        matrix[n2][n1] = 1;
    }

    vector<bool> visited(n, false);

    bfs(matrix, 0);
}