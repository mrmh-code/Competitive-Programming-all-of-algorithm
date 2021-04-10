#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    for(auto i=0; i<10; i++){
       v.push_back(i*10);
    }

    cout<<"The size of vector is :"<<v.size()<<endl;
    cout<<"The Maximum capacity is: "<<v.capacity()<<endl;

}