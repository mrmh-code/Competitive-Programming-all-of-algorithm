#include <iostream>
using namespace std;
//number of digit calculation using Recursive function
int count(int n){
    if (n==0)//base condition
    {
     return 0;
    }

    int smallAns=count(n/10);
    return smallAns+1;
    
}


//using loop function
int count2(int n){
    int s=0;
    while (1)
    {
       if (n==0)
       {
         break;
       }
       n=n/10;
       s++;
       
    }

    return s;
    
}

int main()
{   
    int N;
    cin>>N;
    cout<<count(N)<<endl;

    
}