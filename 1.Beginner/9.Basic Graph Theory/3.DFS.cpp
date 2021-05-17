#include <iostream>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3
int adj[100][100];
int color[100];
int node,edge;
void Dfs_visit(int x){
    color[x]=GRAY;
    cout<<x<<endl;
    for(int i=0; i<node; ++i){
        if (adj[x][i]=1)
        {
            if (color[i]==WHITE)
            {
               Dfs_visit(i);
            }   
        }
        
    }

    color[x]=BLACK;
}
void DFS()
{
    for(int i=0; i<node; ++i){
        color[i]=WHITE;
    }

    for(int i=0; i<node; ++i){
        if (color[i]==WHITE)
        {
            Dfs_visit(i);
        }
        
    }
}
int main()
{
    freopen("bfsinput.txt","r",stdin);
    cin>>node>>edge;

    int n1,n2;
    for(int i=0; i<edge; i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    DFS();

}