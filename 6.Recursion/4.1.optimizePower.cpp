#include <bits/stdc++.h>
using namespace std;

int optimizePower(int a,int n){
    if(n==0){
        return 1;
    }

    int smallAns=optimizePower(a, n/2);
    int sq=smallAns*smallAns;

    if(n&1){
        return a*sq;
    }

    return sq;
}



int main()
{
    cout<<optimizePower(2,6)<<endl;
}