#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;

int power(int a,int b){
    int res=1;
    while (b)
    {
     
        if(b&1){
            res*=a;
            res%=mod;
        }

        a*=a;
        a%=mod;
        b/=2;
   
    }

    return res;
}

int32_t main()
{
    cout<<power(2,4)<<endl;
}