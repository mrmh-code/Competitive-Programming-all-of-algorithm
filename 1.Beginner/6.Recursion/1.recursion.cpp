#include <iostream>
using namespace std;

//The Time Complexity O(n)
// " Space      "     O(n)
void Recursion(int N){
    if (N>0)//Base Condition
    {
        cout<<N<<endl; //Print The Now Value.
        Recursion(N-1);//Function calling itself.
    }
   
}
 
//different procedure work's Recursion Function
void Recursion2(int N){
    if (N>0)
    {
       Recursion2(N-1);
       cout<<N<<endl;
    }
     
    
}


int main()
{
     int N;
     cin>>N;
     Recursion(N);
    //  Recursion2(N);
}

