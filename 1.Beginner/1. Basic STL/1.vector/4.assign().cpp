#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>M;
    M.assign(10,100);
    cout<<"M size of first:"<<M.size()<<endl;
    for(auto i=0; i<M.size(); i++){
        cout<<M[i]<<endl;
    }
}