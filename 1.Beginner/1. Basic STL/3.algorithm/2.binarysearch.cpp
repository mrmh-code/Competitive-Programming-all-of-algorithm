#include <iostream>
#include <algorithm>
using namespace std;

void show(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,6,7,2,4,3,10,5,8,9};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arrsize+arr);
    if (binary_search(arr,arrsize+arr,4));
    {
      cout<<"Element found in the arr."<<endl;
    }
    
    // show(arr,arrsize);
}