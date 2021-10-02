#include <bits/stdc++.h>
using namespace std;

// *** Built-in sorting algorithm in the C++ Standard Template Library (STL)

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}