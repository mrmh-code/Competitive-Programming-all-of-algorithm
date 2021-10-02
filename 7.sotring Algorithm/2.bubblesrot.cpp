#include <iostream>
using namespace std;
//Time Complexity O(N^2)
void BubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
           if (arr[j]>arr[j+1])
           {
                 // *** Built-in function in the C++ Standard Template Library (STL)
              swap(arr[j],arr[j+1]);
           }
           
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}