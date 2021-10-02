#include <bits/stdc++.h>
using namespace std;

vector<int>divisor[123];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int sq=sqrt(i);

        for(int j=1; j<=sq; j++){
            if(i%j==0){
                divisor[i].push_back(j);
                if(i/j!=j){
                    divisor[i].push_back(i/j);
                }
            }
        }

        sort(divisor[i].begin(),divisor[i].end());
    }

    for(int i=1; i<=n; i++){
        cout<<i<<" : ";
        for(auto u: divisor[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }
}