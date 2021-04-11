#include <iostream>
#include <vector>
using namespace std;
//We can do this more easily by using classes or struts


void InsertInArray(int arr[],int index,int item,int length){
    cout<<"Elements are : ";
        for(int i=length; i>index; i--){
           arr[i]=arr[i-1];
        }
        arr[index]=item;
      
         

}

void show(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    int arr[10]={1,2,3,4,6,7};
    int n=7;
    InsertInArray(arr,3,5,n);
    show(arr,n);
}