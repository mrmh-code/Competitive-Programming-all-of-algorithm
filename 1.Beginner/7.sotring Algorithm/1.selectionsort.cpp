#include <iostream>
using namespace std;

//The selection sort function Worst Case  Time Complexity is O(N^2)
void selectionSort(int arr[], int n){
    int temp;
    for(int i=0; i<n-2; i++){
        int minvalue=i;
        for(int  j=i+1; j<n; j++){
            if (arr[minvalue]>arr[j])
            {
               minvalue=j;
            }   
        }
    // *** Built-in function in the C++ Standard Template Library (STL)
    swap(arr[i],arr[minvalue]);

    //implemention swap function.you can using any programming language .
    //    temp=arr[i];
    //    arr[i]=arr[minvalue];
    //    arr[minvalue]=temp;
        

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
    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}