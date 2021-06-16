#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    reverse(v.begin(),v.end());
    for(auto u: v ){
        cout<<u<<" ";
    }
    cout<<endl;
}