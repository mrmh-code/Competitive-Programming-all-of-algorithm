#include <iostream>
using  namespace std;

int sumOfDigit(int n){
    if (n==0)
    {
      return 0;
    }

    int smallAns=sumOfDigit(n/10);
    int lastdigit=n%10;
    return smallAns+lastdigit; 
}

int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigit(n)<<endl;
}