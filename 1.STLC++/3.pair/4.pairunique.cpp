#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string,int>>p;
    p.push_back({"Mehedi",21});
    p.push_back({"Hasan",13});
    p.push_back({"sharif",44});
    p.push_back({"Hasan",13});

    sort(p.begin(),p.end());
    int sz=unique(p.begin(),p.end())-p.begin();

    for(int i=0; i<sz; i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}