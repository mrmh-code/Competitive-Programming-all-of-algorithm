#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string>s;
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
    cout<<s.size()<<endl;
    for(auto u: s){
        cout<<u<<endl;
    }

}