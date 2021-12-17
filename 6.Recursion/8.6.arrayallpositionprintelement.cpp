#include <bits/stdc++.h>
using namespace std;

void printAllPos(int a[], int n, int x,int i){
    if(i==n){
        return ;
    }

    if(a[i]==x){
    cout<<i<<" ";
    }

    printAllPos(a,n,x,i+1);
}

int main()
{
    int arr[]={1,2,3,2,2};
     printAllPos(arr,5,2,0);

}