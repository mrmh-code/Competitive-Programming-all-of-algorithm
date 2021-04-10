#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.pop_back();
    int count=0;
    while(!vec.empty()){
       vec.pop_back();
       count++;
    }

    cout<<count<<endl;
}