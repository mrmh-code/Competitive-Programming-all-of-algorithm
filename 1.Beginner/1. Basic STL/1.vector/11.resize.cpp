#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;

    vec.resize(3);

     for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.resize(8,10);
      for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}