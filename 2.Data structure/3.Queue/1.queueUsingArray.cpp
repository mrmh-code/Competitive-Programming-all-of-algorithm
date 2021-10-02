#include <iostream>
using namespace std;

//try checek yourself

template<typename T>
class Queue{
    int *arr;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
        Queue(int cap){
            capacity=cap;
            arr=new T[capacity];
             nextIndex=0;
             firstIndex=-1;
             size=0;
        }
    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0; 
    }

    void push(T ele){
        if (size==capacity)
        {
            cout<<"Stack is full"<<endl;
            return ;
        }
        
        arr[nextIndex]=ele;
        nextIndex=(nextIndex+1)%capacity;
        if (firstIndex==-1)
        {
            firstIndex=0;
        }
        size++;
    }

    T front(){
        if (isEmpty())
        {
            cout<<"Queue is empty"<<endl;
             return 0;
        }
    return arr[firstIndex];
       
    }

    void pop(){
        if (isEmpty())
        {
            cout<<"Queue Is Empty"<<endl;
            return;
        }
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if (size==0)
        {
            nextIndex=0;
            firstIndex=-1;
        }
        
        
    }

};

int main()
{
    Queue<int> obj(5);
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    // obj.push(60);

    cout<<obj.front()<<endl;
    obj.pop();
    obj.pop();
    obj.pop();
    cout<<obj.front()<<endl;
    cout<<obj.getSize()<<endl;
    obj.push(60);
    obj.push(70);
    obj.push(80);
    cout<<obj.getSize()<<endl;
    obj.push(90);
}