#include <bits/stdc++.h>
using namespace std;

int CheckIthBit(int n, int i){
    int mask=(1<<i);

    return (mask & n)>0 ?1:0;
}

int main()
{
    int n=5;
    int i;
    cin>>i;

    cout<<CheckIthBit(n,i)<<endl;
    
}