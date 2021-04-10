#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec{5,6,7,0};
    // it=vec.begin();
    // it2=vec.end();
    // vec.erase(it,it2);
    // vec.clear();
    // for(auto i=vec.begin(); i<vec.end(); i++){
    //     cout<<*i<<endl;
    // }
    for(auto i=vec.begin(); i<vec.end(); i++){
        if (*i%2==0)
        {
            vec.erase(i);
            i--;
        }
        
    }

    for(auto i=vec.begin(); i<vec.end(); i++){
        cout<<*i<<endl;
    }
}