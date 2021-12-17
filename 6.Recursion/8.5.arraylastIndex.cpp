#include <bits/stdc++.h>
using namespace std;

int  lastIndex(int arr[], int n, int x, int i){
    if(i==-1){
        return -3;
    }

    if(arr[i]==x){
        return i;
    }

    return lastIndex(arr,n,x,i-1);

}


int lastIndex2(int arr[], int n, int x){
    if(n==0){
        return -1;

    }

    if(arr[n-1]==x){
        return n-1;
    }

    return lastIndex2(arr, n-1, x);
}
int main()
{
    int a[]={1,2,3,4,2};
    // cout<<lastIndex(a,5,2,4)<<endl;
    cout<<lastIndex2(a,5,2)<<endl;
}