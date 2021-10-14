#include <bits/stdc++.h>
using namespace std;

vector<int>divisor[123];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            divisor[j].push_back(i);
        }
    }

    for(int i=1; i<=n; i++){
        cout<<"Case "<<i<<": ";
        for(auto u: divisor[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }
}