#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int len=sqrtl(n);
    vector<int>vec(len);
    
    for(int i=0; i<n; i++){
        vec[i/len]+=arr[i];
    }

    int q;
    cin>>q;

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l; i<=r;){
            if(i%len==0 && i+len-1<=r){
                sum+=vec[i/len];
                i+=len;
            }else{
                sum+=arr[i];
                i++;
            }
        }

        cout<<sum<<endl;
    }
    


}