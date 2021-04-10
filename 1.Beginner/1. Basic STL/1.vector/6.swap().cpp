#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>my_vector1{1,2,3,4,5};
    vector<int>my_vector2{3,5,7,9};

    my_vector1.swap(my_vector2);

    cout<<"myvector1= "<<endl;
    for(auto it=my_vector1.begin();  it<my_vector1.end(); it++){
        cout<<*it<<" "<<endl;  
    }

    cout<<endl<<"myvector2="<<endl;
    for(auto it=my_vector2.begin(); it<my_vector2.end(); it++){
        cout<<*it<<endl;
    }
}