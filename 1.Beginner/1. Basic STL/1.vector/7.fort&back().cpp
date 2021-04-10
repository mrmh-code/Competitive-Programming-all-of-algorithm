#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int>my_vector;
    my_vector.push_back(3);
    my_vector.push_back(4);
    my_vector.push_back(5);
    my_vector.push_back(6);
    my_vector.push_back(7);

    // cout<<my_vector.front()<<endl;
    // cout<<my_vector.back()<<endl;

     if (my_vector.front() > my_vector.back()) {
        cout << my_vector.front() - my_vector.back();
    }
    else if (my_vector.front() < my_vector.back()) {
        cout << my_vector.back() - my_vector.front();
    }
    else
        cout << "0";

}
