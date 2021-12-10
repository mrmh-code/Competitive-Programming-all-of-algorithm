#include <iostream>
using namespace std;

//Time Complexity O(n).
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if (arr[i]==key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;
    int pos=linearSearch(arr,n,key);
    if (pos==-1)
    {
        cout<<"Key is not found"<<endl;
    }else{
        cout<<"Key is found "<<pos<<" Number index ."<<endl;
    }
    

}