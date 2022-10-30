#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    list<pair<int, int>> l;

public:
    Graph(int v)
    {
        this->v = v;
    }

    void addEdge(int u, int v)
    {
        l.push_back(make_pair(u, v));
    }

    int findSet(int i, int parent[])
    {
        if (parent[i] == -1)
        {
            return i;
        }
        return findSet(parent[i], parent);
    }

    void union_set(int x, int y, int parent[])
    {
        int s1 = findSet(x, parent);
        int s2 = findSet(y, parent);

        if (s1 != s2)
        {
            parent[s1] = s2;
        }
    }
    bool contains_cycle()
    {
        int *parent = new int[v];
        for (int i = 0; i < v; i++)
        {
            parent[i] = -1;
        }

        for (auto u : l)
        {
            int i = u.first;
            int j = u.second;

            int s1 = findSet(i, parent);
            int s2 = findSet(j, parent);

            if (s1 != s2)
            {
                union_set(s1, s2, parent);
            }
            else
            {
                cout << "Same parents " << s1 << " and " << s2 << endl;
                return true;
            }
        }
        delete[] parent;
        return false;
    }
};

int main()
{
    Graph un(4);

    un.addEdge(0, 1);
    un.addEdge(1, 2);
    un.addEdge(2, 3);
    un.addEdge(3, 0);

    cout << un.contains_cycle() << endl;
}