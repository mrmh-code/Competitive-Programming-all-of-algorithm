#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s={1,1,1,2,2,3,4,5};
    //set of size:
    cout<<s.size()<<endl;
    //erase first element
    // s.erase(s.begin());

    //anyone value pass then delete
    // s.erase(2);

    //erase last element     
    s.erase(--s.end());

    for(auto u: s){
        cout<<u<<" ";
    }

    cout<<endl;

}