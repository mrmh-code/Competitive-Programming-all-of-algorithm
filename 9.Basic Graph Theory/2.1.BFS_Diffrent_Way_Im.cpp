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

	void bfs(int source)
	{
		queue<int> q;
		bool *Visited = new bool[V]{0};

		q.push(source);
		Visited[source] = true;

		while (!q.empty())
		{
			int f = q.front();
			cout << f << endl;
			q.pop();

			for (auto nbr : l[f])
			{
				if (!Visited[nbr])
				{
					q.push(nbr);
					Visited[nbr] = true;
				}
			}
		}
	}
};

int main()
{
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 5);
	g.addEdge(5, 6);
	g.addEdge(4, 5);
	g.addEdge(0, 4);
	g.addEdge(3, 4);
	g.bfs(1);
	return 0;
}
