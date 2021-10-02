#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5,1};
    //assending to dessending
    // sort(v.begin(),v.end());
    // sort(v.begin(),v.end(), greater<int>());//dessending to assending or
    sort(v.rbegin(),v.rend());
    
    for(auto u: v ){
        cout<<u<<" ";
    }
    cout<<endl;
}