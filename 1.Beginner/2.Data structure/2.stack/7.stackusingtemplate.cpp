#include <iostream>
using namespace std;

template <typename T>
class stack{
    T *arr;
    T capacity;
    T nextIndex;
public:
    stack(int cap){
        capacity=cap;
        arr=new T[cap];
        nextIndex=0;
    }
    bool is_empty(){
       return nextIndex==0;
        
    }

    void push(T ele){
        if (capacity==nextIndex)
        {
             cout<<"Stack Overflow"<<endl;
             return;
        }
        arr[nextIndex]=ele;
        nextIndex++;
        
    }

    void pop(){
        if (is_empty())
        {
            cout<<"stack is underflow"<<endl;
            return ;}
            nextIndex--;    
    }

    T  top(){
        if (is_empty())
        {
           cout<<"Stack is empty"<<endl;
           return -1;
        }

        return arr[nextIndex-1];
        
    }
};


int main()
{
    stack<int>s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // cout<<s.top()<<endl;

    while(!s.is_empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


}