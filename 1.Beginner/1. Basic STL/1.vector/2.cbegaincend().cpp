#include <iostream>
#include <vector>
using namespace std;

//Time Complexity : O(n)

int main()
{
    vector<string>cs;
    cs.push_back("first");
    cs.push_back("second");
    cs.push_back("fourth");
    cs.push_back("fifth");
    cs.push_back("sixth");
    //bottam to to print vector
    cout<<"Content of the vector:"<<endl;

    for(auto itr=cs.cbegin(); itr!=cs.cend(); ++itr){
        cout<<*itr<<endl;
    }

    //top to bottam print vector
    cout<<"Content end to begin() print vector:"<<endl;
    for(auto itr=cs.end(); itr>=cs.begin(); --itr){
        cout<<*itr<<endl;
    }

}