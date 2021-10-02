#include <iostream>
using namespace std;
//time complexity O(log n).
int binarySearch(int arr[],int n,int Key){
        int left=0;
        int right=n-1;
        int mid;
        while (left<=right)
        {
            mid=(left+right)/2;
            if (arr[mid]==Key)
            {
               return mid;
            }
            else if (arr[mid]<Key)
            {
               left=mid+1;
            }
            else{
                right=mid-1;
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
    int pos=binarySearch(arr,n,key);
    if (pos==-1)
    {
        cout<<"Key is not found"<<endl;
    }else{
        cout<<"Key is found "<<pos<<" Number index ."<<endl;
    }
    

}