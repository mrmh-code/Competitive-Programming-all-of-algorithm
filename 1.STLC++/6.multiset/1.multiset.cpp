#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    cout<<"multiset size :";
    cout<<s.size()<<endl;

    cout<<"Original count print: ";
    cout<<s.count(1)<<endl;
    cout<<"Print All Element: ";
    for(auto u: s){
        cout<<u<<" ";
    }
    cout<<endl;


}