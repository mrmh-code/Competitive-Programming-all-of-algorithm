#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string A) {
       stack<char>s;
        for(int i=0; i<A.size(); i++){
            if (A[i]=='('||A[i]=='{'||A[i]=='[')
            {
                s.push(A[i]);
            }else{
                 if (s.empty())
                 {
                    return false;
                 }
                 else if (A[i]==')')
                 {
                    if (s.top()=='(')
                    {
                       s.pop();
                    }else{
                        return false;
                    }
                    
                 }
                 
                 else if (A[i]=='}')
                 {
                    if (s.top()=='{')
                    {
                       s.pop();
                    }else{
                        return false;
                    }
                    
                 }

                 else if (A[i]==']')
                 {
                     if (s.top()=='[')
                     {
                       s.pop();
                     }else{
                         return false;
                     }
                     
                 }
                 
                 
                
            }
            
        }
    if (s.empty())
    {
        return true;
    }
    return false;
    }


int main()
{
    string A;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>A;
            if (isBalanced(A))
            {
                cout<<"YES"<<endl;
                
            }
           if (isBalanced(A)==0)
           {
               cout<<"NO"<<endl;
           }
           
            
    }

    return 0;
}