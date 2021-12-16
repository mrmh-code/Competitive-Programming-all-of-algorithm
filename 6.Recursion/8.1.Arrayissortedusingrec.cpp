#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return 1;
    }

    if(arr[0]>arr[1]){
        return 0;
    }

    bool isSmallerSorted=isSorted(arr+1,n-1);

    return isSmallerSorted;
}


bool isSorted2(int arr[], int n){
    if(n==0 ||  n==1){
        return true;
    }

    bool isSmallerSorted=isSorted2(arr+1,n-1);

    if(!isSmallerSorted){
        return false;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return true;
    }

     
}

bool isSOrted3(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[n-2]>arr[n-1]){
        return false;
    }else{
        return true;
    }
    isSOrted3(arr,n-1);
    
    
}

int main()
{
    int arr[]={1,2,3,4,5};
    if(isSOrted3(arr,5)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted "<<endl;
    }
    
}