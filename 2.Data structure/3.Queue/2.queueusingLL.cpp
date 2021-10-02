#include <iostream>
using namespace std;

template<typename T>
class Node{
    public:
    int data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class Queue{
    Node<T>*head;
    Node<T>*Tail;
    int size;

    public:
        Queue(){
            head=NULL;
            Tail=NULL;
            size=0;
        }

        int getSize(){
            return size;
        }
        bool isEmpty(){
            return size==0;
        }
        void push(T ele){
            Node<T>* n =new Node<T>(ele);
            if (head==NULL)
            {
                head=n;
                Tail=n;
            }else{
                Tail->next=n;
                Tail=n;

            }
            size++;
        }

        T front(){
            if (isEmpty())
            {
                return 0;
            }
            return head->data;
            
        }

        void pop(){
            Node<T>* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            size++;
             
        }
};
int main()
{
    Queue<int> obj;
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