#include <bits/stdc++.h>
using namespace std;

const int mx=1e6;
bool is_prime[mx];
vector<int>prime;

void primeGen(int n){
    memset(is_prime,1,sizeof(is_prime));

    for(int i=3; i<=sqrt(n); i+=2){
        for(int j=i*i; j<=n; j+=(i+i)){
            is_prime[j]=0;
        }
    }

    prime.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(is_prime[i]==1){
            prime.push_back(i);
        }
    }
}

int Nod(long long n){
     int ret=1;
    for(auto u: prime){
        if(1LL * u*u>n){break;}

        if(n%u==0){
            int cnt=1;
            while (n%u==0)
            {
               n/=u;
                cnt++;

            }
            ret*=cnt;
        }
        
    }
    if(n>1){
        ret*=2;
    }
    return ret;
}

int main()
{
    primeGen(1e6);
    int n=360;
    cout<<Nod(n)<<endl;
        // int cnt=0;
        // for(int i=1; i<=n; i++){
        //     if(n%i==0){cnt++;}
        // }
        // cout<<cnt<<endl;
}