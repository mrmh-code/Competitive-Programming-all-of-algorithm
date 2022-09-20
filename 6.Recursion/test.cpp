#include <bits/stdc++.h>
using namespace std;

void increase(int n){
    cout<<n<<endl;
    if(n==0){
        return;
    }

    increase(n-1);

}

void decrease(int n){
    if(n==0){
        return;
    }

    decrease(n-1);
    cout<<n<<endl;
}

int power(int a, int n){
    if(n==0){
        return 1;
    }

    int smallAns=power(a,n-1);

    return a*smallAns;
}
int main()
{
    // increase(5);
    // decrease(5);

    cout<<power(2,3)<<endl;
}