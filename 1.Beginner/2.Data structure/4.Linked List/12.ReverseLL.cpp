#include <iostream>
using namespace std;
///type -1 than exit program 
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
    }
    else{
      tail->next=n;
      tail=n;
    }
    cin>>data;
  }

    return head;
}

Node *ReverseLL(Node *head){
    Node *curr=head;
    Node *prev=NULL;

    while (curr!=NULL)
    {
       Node *n=curr->next;
       curr->next=prev;

       prev=curr;
       curr=n;
    }

    return prev;
    
}

//Show Linked List Node data 

void print(Node *p){
  while (p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
  
} 


int main()
{
  Node *head=takeInput();
  head=ReverseLL(head);
  print(head);
  
  return 0;
}