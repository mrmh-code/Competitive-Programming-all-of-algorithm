#include <iostream>
using namespace std;
//The Time Complexity O(N)
// "  Space       "  O(N)
//this program takes a positive integer
//factorial will be equal : 1*2*3*4*5=120
int factorial(int N){
    if (N==0)// 1st step base case
    {
       return 1; 
    }

    int smallAns=factorial(N-1); //2nd step assumption recursive case.
    int ans=N*smallAns;   //calculate factorial.
    return ans;

    
}

int main()
{
    int N;
      cout<<"Enter a positive Number: ";
    cin>>N;
    cout<<"Factorial of "<<N<<": "<<factorial(N)<<endl;
}