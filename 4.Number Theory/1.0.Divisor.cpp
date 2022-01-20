#include <bits/stdc++.h>
using namespace std;

// count divisor
//this divisor function time complexity O(n),Worst case.2nd divisor function optimize this code & less time complexity
int divisor(int n)
{       int divisor=0;
    for(int i=1; i<=n; i++){
        if (n%i==0)
        {
            divisor++;
        }
        
    }

    return divisor;
}

// count divisor
//divisor2 function Time complexity is O(sqrt(n))
int divisor2(int n)
{
    int i,divisor=0;
    for(i=1; i*i<=n; i++){
        if (i*i==n)
        {
            divisor++;
        }
        else if (n%i==0)
        {
           divisor=divisor+2;
        }
        
        
    }

    return divisor;
}

//different approche
int divisor3(int n){
    vector<int>div;

    int sq=sqrt(n);

    for(int i=1; i<=sq; i++){
        if(n%i==0){
            div.push_back(i);
            if(n/i!=i){
                div.push_back(n/i);
            }
        }
    }

    int sz=div.size();
    return sz;
}



int main()
{    int n;
    cin>>n;
    cout<<divisor(n)<<endl;
    cout<<divisor2(n)<<endl;
    cout<<divisor3(n)<<endl;
    
}