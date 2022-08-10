#include <bits/stdc++.h>
using namespace std;

int power(int a,int b){
    int res=1;
    while (b)
    {
       if(b&1){
        res*=a;
       }
       a*=a;
       b=b>>1;
    }

    return res;
    
}

int main()
{
    cout<<power(2,20)<<endl;
}