#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<pair<int,int>>p;

    p.insert({5,1});
    p.insert({3,7});
    p.insert({1,3});
    p.insert({7,8});
    p.insert({2,4});
    p.insert({5,2});
    p.insert({1,7});

    cout<<p.size()<<endl;
    for(auto u : p){
        cout<<u.first<<" "<<u.second<<endl;
    }

}