#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,-10};

    all_of(arr,arr+10,[](int x){return x>0;})?
        cout<<"All of positive Number"<<endl:
        cout<<"All of not positive Number"<<endl;

        
}