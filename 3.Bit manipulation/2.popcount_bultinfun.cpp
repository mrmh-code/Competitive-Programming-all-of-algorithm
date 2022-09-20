#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>vec;
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        vec.push_back(__builtin_popcount(i));
    }

    for(auto u: vec){
        cout<<u<<" ";
    }
    cout<<endl;
}