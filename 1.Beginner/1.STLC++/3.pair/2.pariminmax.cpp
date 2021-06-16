#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p1,p2;
    
    p1={3,5};
    p2={1,6};

    pair<int,int>p=min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, int>maxP=max(p1,p2);
    cout<<maxP.first<<" "<<maxP.second<<endl;

}