#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int,greater<int>>s1;
    
    s1.insert(5);
    s1.insert(3);
    s1.insert(2);
    s1.insert(10);
    s1.insert(9);
    s1.insert(7);
    s1.insert(8);
    s1.insert(2);
    s1.insert(5);
    s1.insert(6);
    s1.insert(1);
    s1.insert(3);
    s1.insert(4);
    cout<<"printing s1 size:";
    cout<<s1.size()<<endl;
    cout<<"printing s1 element decresing order:";
    for(auto u: s1){
        cout<<u<<" ";
    }
    cout<<endl;
    cout<<endl;
    set<string,greater<string>>s;
     s.insert("Mehedi");
    s.insert("Hasan");
    s.insert("Tanvir");
    s.insert("Monir");
    s.insert("Tanvir");
    s.insert("Tanvir");
    s.insert("Tanvir");
    s.insert("Nobel");
    s.insert("Shakib");
    s.insert("Nobel");
    s.insert("kawser");
    s.insert("kawser");
    s.insert("kawser");
    s.insert("Habib");
    s.insert("Arman");
    cout<<"string s size(): ";
    cout<<s.size()<<endl;
        cout<<"string Print Decresing Order."<<endl;
    for(auto u: s){
        cout<<u<<endl;
    }

    set<pair<int,int>,greater<pair<int,int>>>P;

    P.insert({1,2});
    P.insert({5,1});
    P.insert({3,2});
    P.insert({6,7});
    P.insert({4,7});
    P.insert({2,7});
    P.insert({3,1});
    cout<<"Pair of size : "<<P.size()<<endl;
    cout<<"Pair of value Decresing Order: "<<endl;
    for(auto u: P){
        cout<<u.first<<" "<<u.second<<endl;
    }


}