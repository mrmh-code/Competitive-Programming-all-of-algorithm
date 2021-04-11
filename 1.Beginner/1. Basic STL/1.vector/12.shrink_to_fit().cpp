#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec(10);

    for(int i=0; i<vec.size(); i++){
        vec[i]=i;
    }
    cout<<"vector size intially:"<<vec.size();
    cout<<"Vector element are:";

    for(int i=0; i<10; i++){
        cout<<vec[i];
    }
    cout<<endl<<endl;

    vec.resize(5);
    
   cout<<"vector size intially:"<<vec.size();
    cout<<"Vector element are:";
     for(int i=1; i<=10; i++){
        cout<<vec[i];
    }
     cout<<endl<<endl;
    vec.shrink_to_fit();
    //after 5 print garbage 
    cout<<"vector size intially:"<<vec.size();
    cout<<"Vector element are:";
     for(int i=1; i<=10; i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;


}