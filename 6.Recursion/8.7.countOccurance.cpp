#include <bits/stdc++.h>
using namespace std;

void count(int a[], int n, int x, int i, int &ans){

    if(i==n){
        return ;
    }

    if(a[i]==x){
        ans++;
    }

    count(a,n,x,i+1,ans);
}

int main()
{
    int arr[]={5,5,6,5,7};

    int ans=0;
    count(arr,5,5,0,ans);
    cout<<ans<<endl;
}