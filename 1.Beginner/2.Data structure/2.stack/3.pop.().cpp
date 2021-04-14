#include <iostream>
using namespace std;

class stack{
    int *arr;
    int capacity;
    int nextindex;
    public:
    stack(int cap){
        capacity=cap;
        arr=new int[capacity];
        nextindex=0;
    }
    bool is_empty(){
        if (nextindex==0)
        {
           return true;
        }
        else{
            return false;
        }
        
    }

    void push(int ele){
        if (nextindex==capacity)
        {
           cout<<"Stack is Overflow\n";
           return;
        }
            arr[nextindex]=ele;
            nextindex++;    
    }

    void pop(){
        if (is_empty())
        {
          cout<<"Stack is underflow\n";
          return;
        }
        nextindex--;
    }

int top(){
        if (is_empty())
        {
            cout<<"Stack is empty.\n";
            return -1;
        }
        return arr[nextindex-1];
        
    }
};


int main()
{
    stack st(5);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

}