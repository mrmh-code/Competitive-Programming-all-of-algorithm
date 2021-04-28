#include <iostream>
using namespace std;
//This Program Time Complexity O(n).second  function optimize code & Reduce Time complexity.
int isprime(int n){
    int i;
    if (n<2)
    {
        return false;
    }
    for( i=2; i<n; i++){
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;  
}


int isPrime2(int n){
     
    if (n<2)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if (n%i==0)
        {
            return false;
        } 
    }

    return true;
    
}

int main()
{
     int n;
     cin>>n;
  
     if (isPrime2(n))
     {
        cout<<"Number is Prime."<<endl;
     }
     else{
         cout<<"Is Not Prime Number."<<endl;
     }
    

}