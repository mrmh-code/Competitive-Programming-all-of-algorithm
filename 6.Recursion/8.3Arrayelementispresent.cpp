#include <bits/stdc++.h>
using namespace std;

bool isPresent(int a[], int n, int x){
    if(n==0){
        return false;
    }
    if(a[0]==x){
        return true;
    }
    return isPresent(a+1,n-1,x); 
}

bool isPresent2(int arr[], int n, int x){
    if(n==0){
        return false;
    }
    int rem=isPresent2(arr+1, n-1, x);
    if(rem){
        return true;
    }

    if(arr[0]==x){
        return true;
    }else{
        return false;
    }
}

bool isPresented3(int arr[],int n,int x){
    if(n==0){
        return false;
    }

    if(arr[n-1]==x){
        return true;
    }
    return isPresented3(arr, n-1,x);
}

bool isPresented4(int arr[], int n, int x, int i){
    if(i==n){
        return false;
    }
    if(arr[i]==x){
        return true;
    }

    return isPresented4(arr,n,x,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    if(isPresented4(arr,5,1,0)){
        cout<<"Found element"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}