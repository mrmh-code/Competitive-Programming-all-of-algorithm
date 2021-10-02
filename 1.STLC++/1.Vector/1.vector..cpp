#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<v.size()<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}