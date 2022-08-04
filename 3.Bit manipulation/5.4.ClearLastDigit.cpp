#include <bits/stdc++.h>
using namespace std;

void clearLastDigit(int &n, int i)
{
    int mask=(-1<<i);
    n = n & mask;
}

int main()
{
    int n=5;
    int i=3;

    clearLastDigit(n,i);
    cout<<n<<endl;

}