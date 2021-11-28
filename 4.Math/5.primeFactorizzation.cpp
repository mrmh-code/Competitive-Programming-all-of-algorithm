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

vector<long long> factorization(long long n){
    vector<long long >ret;
    for(auto u: prime){
        if(1LL * u*u>n){break;}

        if(n%u==0){
            while (n%u==0)
            {
               ret.push_back(u);
               n/=u;
            }
            
        }
    }
    if(n>1){
        ret.push_back(n);
    }
    return ret;
}

int main()
{
    int lim=1e6;
    primeGen(lim);

    vector<long long>ans=factorization(100);
    for(auto u: ans){
        cout<<u<<" ";
    }
    cout<<endl;
}