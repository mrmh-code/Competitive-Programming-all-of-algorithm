#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const long long infLL = 9000000000000000000;
typedef vector<pll> vll;
const int mx = 1e5 + 123;
vector<pair<int, int>> adj[mx];
ll dist[mx];

void dijkstra(int s, int n){
    for(int i=0; i<n; i++){
        dist[i]=infLL;
    }

    priority_queue<pll,vll,greater<pll>>pq;
    pq.push({s,0});

    while (!pq.empty())
    {
        int u=pq.top().first;
        ll currD=pq.top().second;
        pq.pop();

        if(dist[u]<currD){
            continue;
        }

        for(auto p: adj[u]){
            int v=p.first;
            int w=p.second;

            if(currD+w<dist[v]){
                dist[v]=currD+w;
                pq.push({dist[v],v});
            }
        }
    }
    
}
 
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

    dijkstra(0, n);

    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}

/*
5 7
1 3 3
1 2 2
1 4 6
2 0 6
2 3 7
0 4 3
3 4 5
*/