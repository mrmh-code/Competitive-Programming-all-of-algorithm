#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

vector<int> arr[N];
int dep[N], Par[N];

void dfs(int cur, int par) {
	Par[cur] = par;
	dep[cur] = dep[par] + 1;
	for (auto x : arr[cur]) {
		if (x != par) {
			dfs(x, cur);
		}
	}
}

int LCA(int u, int v){
    if(u==v){
        return u;
    }

    if(dep[u]<dep[v]){
        swap(u,v);
    }

    int diff=dep[u]-dep[v];

    while (diff--)
    {
        u=Par[u];
    }

    while (u!=v)
    {
        u=Par[u];
        v=Par[v];
    }
    
    return u;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    dfs(1,0);

    cout<<LCA(9,12)<<endl;
    cout<<LCA(10,8)<<endl;
}