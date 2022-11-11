#include <bits/stdc++.h>
using namespace std;

class Graph
{

    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool und = true)
    {
        l[i].push_back(j);
        if (und)
        {
            l[j].push_back(i);
        }
    }

    void helper(int node, bool *Visited)
    {
        Visited[node] = true;
        cout << node << " ,";

        for (int nbr : l[node])
        {
            if (!Visited[nbr])
            {
                helper(nbr, Visited);
            }
        }

        return;
    }

    void dfs(int source)
    {
        bool *Visited = new bool[V]{0};
        helper(source, Visited);
    }
};

int main()
{
    Graph G(5);
    G.addEdge(0, 1);
    G.addEdge(2, 0);
    G.addEdge(2, 1);
    G.addEdge(1, 3);
    G.addEdge(3, 4);
    G.addEdge(1, 4);
    G.dfs(0);

}