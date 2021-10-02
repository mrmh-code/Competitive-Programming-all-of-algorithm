#include <iostream>
using namespace std;

 int CountZero(int n){
     if (n==0)
     {
        return 0;
     }
     
     int ans=CountZero(n/10);
     int lastdigit=n%10;
     if (lastdigit==0)
     {
        return ans+1;
     }else{
         return ans;
     }
     
 }

 int main()
 {
     int n;
     cin>>n;
     cout<<CountZero(n)<<endl;
 }