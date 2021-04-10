#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);
    myVector.push_back(60);
    cout<<myVector.at(3)<<endl;

}