#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;

    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_back(50);

    cout<<dq.front()<<" "<<dq.back()<<endl;
    dq.push_back(100);
    dq.push_back(70);
    cout<<dq.front()<<" "<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;
}