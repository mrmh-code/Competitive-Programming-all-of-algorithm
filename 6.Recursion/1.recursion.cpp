#include <iostream>
using namespace std;

//The Time Complexity O(n)
// " Space      "     O(n)
//dessending to assending order print The Value
void Recursion(int N){
    if (N==0)//Base Condition
    {
    return ;
    }

    cout<<N<<endl;
    Recursion(N-1);
   
}
 
//different procedure work's Recursion Function
//assending to dessending
void  Recursion2(int N){
    if (N==0)//base condition
    {
   return ;
    }
     Recursion2(N-1);//recursive case
     cout<<N<<endl; //printing value
    
}


int main()
{
     int N;
    
     N=5;
     Recursion(N);
     
}

