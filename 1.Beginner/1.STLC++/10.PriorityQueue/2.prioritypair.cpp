#include <bits/stdc++.h>
using namespace std;

int main()
{   //decresing orderprint
    // priority_queue<pair<int,int>>q;

    //incresing order 
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;

    q.push({1,2});
    q.push({5,1});
    q.push({3,2});
    q.push({2,1});
    q.push({4,2});

    while (!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second<<endl;
        q.pop();
    }
    cout<<endl;
}