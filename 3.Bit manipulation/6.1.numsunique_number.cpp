#include <bits/stdc++.h>
using namespace std;


int uniqueNumber(vector<int>arr){
    int n=arr.size();
    int cumulative_xor=0;
    for(int i=0; i<n; i++){
        cumulative_xor=cumulative_xor^arr[i];
    }

    return cumulative_xor;
}


int main()
{
    vector<int>arr={1,2,3,4,5};
    cout<<uniqueNumber(arr)<<endl;
}