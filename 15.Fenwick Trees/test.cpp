#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<int>s;
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);

    for(auto u: s){
        cout<<u<<" ";
    }
    int t=0;
    cout<<s.count(t+1)<<endl;
}