#include <bits/stdc++.h>
using namespace std;

bool checkPal(int a[], int s, int e){
    if(s>e){
        return true;
    }

    if(a[s]==a[e]){
        return checkPal(a,s+1,e-1);
    }else{
        return false;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    if(checkPal(arr,0,4)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"is Not Palindrome"<<endl;
    }
}