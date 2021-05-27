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

void RemoveDuplicate( Node *p)
{
     Node *q=p->next;
    while(q!=NULL)
        {
        if(p->data!=q->data)
            {
                p=q;
            q=q->next;
                }
        else
            {
            p->next=q->next;
            free(q);
            q=p->next;
                }
    }
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
     RemoveDuplicate(head);
    print(head);
  
  return 0;
}