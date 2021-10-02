#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s={1,1,3,3,2,2};
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}