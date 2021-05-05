#include <iostream>
using namespace std;

int power(int x, int n){
    if (n==0)
    {
       return 1;
    }

    int smalloutput=power(x,n-1);
    return x*smalloutput;
}

int main()
{
    int x,n;
    cout<<"Sample Value: ";
    cin>>x;
    cout<<"power of "<<x<<" input value :";
    cin>>n;

    cout<<n<<" power of "<<x<<" : "<<power(x,n)<<endl;
}