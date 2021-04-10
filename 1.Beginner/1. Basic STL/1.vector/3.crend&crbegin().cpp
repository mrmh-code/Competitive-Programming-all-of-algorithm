#include <iostream>
#include <vector>
using namespace std;
//Time Complexity : O(n)

int main()
{
    vector<int>vec{10,20,30,40,50};
    cout<<"Using crend() & crbegin() function using :"<<endl;
    for(auto i=vec.crbegin(); i!=vec.crend(); i++){
        cout<<*i<<endl;
    }

   
}