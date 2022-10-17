#include <bits/stdc++.h>
using namespace std;

bool divideAmountK(int arr[], int n, int k, int min_costs){
    
    int partition=0;
    int current_friend=0;

    for(int i=0; i<n; i++){
        if(current_friend + arr[i] >= min_costs){
            partition +=1;
            current_friend=0;
        }else{
            current_friend+=arr[i];
        }
    }

    return partition>=k;
}

int k_partition(int *arr, int n, int k)
{
    int s=0;
    int e=0;

    for(int i=0; i<n; i++){
        e+=arr[i];
    }
    int ans;
    while (s<=e)
    {
        int mid=(s+e)/2;
        bool isPossible=divideAmountK(arr,n,k,mid);

        if(isPossible){
            s=mid+1;
            ans=mid;
        }else{
            e=mid-1;
        }
    }
    
    return ans;
}


int main()
{
    int a[]={10,20,40,30};
    int n=sizeof(a)/sizeof(int);
    int k=3;
    cout<<k_partition(a,n,k)<<endl;
}