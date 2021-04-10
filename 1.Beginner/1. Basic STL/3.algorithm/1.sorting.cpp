#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void show(int arr[], int arrsize){
    for(int i=0; i<arrsize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[]={5,6,7,4,3,2,1};
   int arrsize = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arrsize+arr);
     
     show(arr,arrsize);

}