#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,2,3,3,3,4,5};
    //binary Search find lower Bound.
    int lo=lower_bound(v.begin(),v.end(),3)-v.begin();
    cout<<lo<<endl;

    //binary Search find Upper Bound.
    int up=upper_bound(v.begin(),v.end(),3)-v.begin();
    cout<<up<<endl;
    
}