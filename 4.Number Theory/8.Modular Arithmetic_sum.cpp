#include <bits/stdc++.h>
using namespace std;

#define Mod 100000007

int main()
{
    int Num;
    cin>>Num;
    long long ans=1;
    for(int i=1; i<=Num; i++){
        ans*=i;
        ans%=Mod;
    }

    cout<<ans<<endl;

}