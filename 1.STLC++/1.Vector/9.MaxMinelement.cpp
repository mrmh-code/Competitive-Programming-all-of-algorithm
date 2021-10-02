#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,5,5,7,7,1};
    //iterator print max element
    // vector<int>:: iterator it=max_element(v.begin(),v.end());
    int N=max_element(v.begin(),v.end())-v.begin();
    
    //max value 
    // cout<<*it<<endl;
    //check index
    cout<<N<<endl;
}