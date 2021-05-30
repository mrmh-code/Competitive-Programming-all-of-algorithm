#include <iostream>
#include <queue>
using namespace std;

//c++ Bultin Inbuilt Queue Previous makeing queue

int main()
{
    queue<int> data;
    data.push(10);
    data.push(20);
    data.push(30);
    data.push(40);
    data.push(50);
    cout<<data.front()<<endl;
    cout<<data.back()<<endl;
    data.pop();
    data.pop();
    data.pop();
    cout<<data.front()<<endl;
    cout<<data.size()<<endl;
}