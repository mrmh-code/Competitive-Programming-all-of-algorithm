#include <bits/stdc++.h>
using namespace std;

int getSum(int n){
    return (n*(n+1))/2;
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        long long y;
        cin>>y;

        long long l=1,r=1e5,ans=-1;

        while (l<=r)
        {
            long long mid=(l+r)/2;
            if(getSum(mid)==y){
                ans=mid;
                break;
            }
            else if(getSum(mid)<=y){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        
    cout<<ans<<endl;
    }

    
}