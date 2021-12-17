#include <bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int x, int i){
    if(i==n){
        return -1;
    }

    if(arr[i]==x){
        return i;
    }
    return firstIndex(arr,n, x, i+1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    cout<<firstIndex(arr,5,5,0)<<endl;
}