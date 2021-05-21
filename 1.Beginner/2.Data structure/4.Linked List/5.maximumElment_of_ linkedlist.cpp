#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while (data!=-1)
    {
      Node *n=new Node(data);
      if (head==NULL)
      {
         head=n;
         tail=n;
      }else{
          tail->next=n;
          tail=n;
      }
      cin>>data;
    }
    return head;
}

int  MaximumElementOfLinkedList(Node *p){
    int max=INT32_MIN;
    while (p)
    {
         if (p->data>max)
         {
            max=p->data;
         }
         p=p->next;
         
    }
    return max;
    
}


int main()
{
    Node *head=takeInput();
   cout<<MaximumElementOfLinkedList(head)<<endl;
}