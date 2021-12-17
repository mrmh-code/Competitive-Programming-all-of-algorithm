#include <bits/stdc++.h>
using namespace std;

int length(char arr[]){
    if(arr[0]=='\0'){
        return 0;
    }

    int smallcount=length(arr+1);
    return 1+smallcount;
}

int main()
{
    char arr[]="abcd";
    cout<<length(arr)<<endl;
}