#include <bits/stdc++.h>
using namespace std;

int MIN(int arr[], int n){
    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        if(ans>arr[i]){
            ans=arr[i];
        }
    }

    return ans; 
}

int main()
{
    int arr[]={5,3,2,1,10,100,7,8,3};
    cout<<MIN(arr,9)<<endl;
}