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

    //delete 1 of all element
    // s.erase(1);

    //delete just 1 of 1 element
     auto it=s.find(1);
     s.erase(it);
     

    for(auto u: s){
        cout<<u<<" ";
    }
    cout<<endl;
}