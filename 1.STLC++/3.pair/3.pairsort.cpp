#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vec;

    // vec.push_back({5,6});
    // vec.push_back({2,3});
    // vec.push_back({4,5});
    // vec.push_back({6,1});
    // vec.push_back({1,5});
    
    // sort(vec.begin(),vec.end());
    //sort reverse order
    // sort(vec.rbegin(),vec.rend());
    // for(auto u: vec){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }


    vector<pair<string,int>>v;

    v.push_back({"Mehedi",21});
    v.push_back({"Hasan",13});
    v.push_back({"sharif",44});
    v.push_back({"hasan",14});

    sort(v.begin(),v.end());
    for(auto u: v){
        cout<<u.first<<" "<<u.second<<endl;
    }

    
}