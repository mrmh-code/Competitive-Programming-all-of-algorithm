#include <bits/stdc++.h>
using namespace std;

class Graph
{
    vector<pair<int, int>> *list;
    int V;

public:
    Graph(int n)
    {
        V = n;
        list = new vector<pair<int, int>>[n];
    }

    void addEdge(int x, int y, int w)
    {
        list[x].push_back({y, w});
        list[y].push_back({x, w});
    }

    int prim_mst()
    {

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
        bool *vis = new bool[V]{0};
        int ans = 0;

        Q.push({0, 0});

        while (!Q.empty())
        {
            auto best = Q.top();
            Q.pop();

            int to = best.second;
            int weight = best.first;

            if (vis[to])
            {
                continue;
            }

            ans += weight;
            vis[to] = 1;

            for (auto x : list[to])
            {
                if (vis[x.first] == 0)
                {
                    Q.push({x.second, x.first});
                }
            }
        }
        return ans;
    }
};

int main()
{

    int n, m;
    cin >> n >> m;

    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x - 1, y - 1, w);
    }

    cout << g.prim_mst() << endl;
}


/*
8 9
1 2 10
2 3 12
2 8 14
2 6 6
3 4 7
4 5 9
5 6 11
6 7 12
7 8 13

output:68
*/