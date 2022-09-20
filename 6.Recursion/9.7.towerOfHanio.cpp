#include <bits/stdc++.h>
using namespace std;

int toh(int n){
    if(n==0){
        return 0;
    }
    int smallAns1=toh(n-1);
    int smallAns2=toh(n-1);
    cout<<smallAns1+1+smallAns2<<endl;
    return smallAns1+1+smallAns2;
}

int main()
{
  int n;
  cin>>n;
  cout<<toh(n)<<endl;

}