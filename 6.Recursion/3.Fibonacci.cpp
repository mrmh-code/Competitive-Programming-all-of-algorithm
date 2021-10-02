#include <iostream>
using namespace std;

int fib(int N){
    if(N==0){
        return 0;
    }
    if (N==1)
    {
        return 1;
    }

    int smalloutput1=fib(N-1);
    int smalloutput2=fib(N-2);

    return smalloutput1+smalloutput2;
    
}

int  main()
{
    int N;
    cin>>N;
    cout<<fib(N)<<endl;
}