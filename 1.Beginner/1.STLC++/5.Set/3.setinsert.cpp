#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s={1,1,3,3,2,2};
    s.clear();

    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    
    // cout<<*s.begin()<<endl;
    // cout<<s.count(4)<<endl;

    // cout<<s.size()<<endl;
    // for(auto u : s){
    //     cout<<u<<" ";
    // }cout<<endl;

}