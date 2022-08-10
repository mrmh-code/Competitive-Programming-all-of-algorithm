#include <bits/stdc++.h>
using namespace std;

int multiply(int a,int b,int c){
    int res=0;
    while (b)
    {
       if(b&1){
        res=res+a;
        res%=c;
       }
       a+=a;
       a%=c;
       b/=2;
    }
    return res;
}


int main()
{
    cout<<multiply(5000,20,10e7)<<endl;
}