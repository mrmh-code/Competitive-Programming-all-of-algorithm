#include <bits/stdc++.h>
using namespace std;

int const mx=1e6+123;
bool is_prime[mx];

void primeGen(int n){  

    for(int i=3; i<=sqrt(n); i+=2){
        for(int j=i*i; j<=n; j+=(i+i)){
            is_prime[j]=1;
        }
    }

    cout<<2<<" ";
    for(int i=3; i<=n; i+=2){
        if(is_prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cin>>n;
    primeGen(n);
}