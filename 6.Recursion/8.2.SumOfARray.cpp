#include <bits/stdc++.h>
using namespace std;

int SumOfArray(int arr[], int n){
    if(n==0){
        return 0;
    }

    return arr[0]+SumOfArray(arr+1,n-1);
}

int SumOfArray2(int arr[], int n){
    if(n==0){
        return 0;
    }

    return arr[n-1]+SumOfArray(arr,n-1);
}

int SumOfArray3(int arr[], int n, int i){
    if(i==n){
        return 0;
    }

    return arr[i]+SumOfArray3(arr, n,i+1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    // cout<<SumOfArray(arr,5)<<endl;
    // cout<<SumOfArray2(arr, 5)<<endl;
       cout<<SumOfArray3(arr,5,0)<<endl;

    
}