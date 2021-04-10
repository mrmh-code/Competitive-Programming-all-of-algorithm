#include <iostream>
#include <vector>
using namespace std;
    //This program Time complexity: O(1)
int main()
{
    //Integer Vector Example
   vector<int>my_vector{10,20,30,40,50};
   for(auto it=my_vector.begin(); it!=my_vector.end(); it++){
       cout<<*it<<" ";
   }
    cout<<endl<<endl;
   //string Vector Example
   
   vector<string>mystring{"coding","Love","Happy"};
   for(auto it=mystring.begin(); it!=mystring.end(); it++){
       cout<<*it<<" ";
   }
   cout<<endl<<endl;
}