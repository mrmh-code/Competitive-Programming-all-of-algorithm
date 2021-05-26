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

Node *takeInput(){
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
Node* InsertionIthPosition(Node *head, int i, int data){
    if (i<0)
    {
        return head;
    }
    if (i==0)
    {
        Node *n=new Node(data);
        n->next=head;
        head=n;
        return head;
    }

    Node *copyhead=head; 
    int count=1;
    while (count<=i-1&& head!=NULL)
    {
        head=head->next;
        count++;

    }
    if(head){
        Node *n=new Node(data);
        Node *temp=head->next;
        head->next=n;
        n->next=temp;
        return copyhead;
    }
    
    return copyhead;
}
void Display(Node *p){
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
     int i,data;
     cin>>i>>data;
     head=InsertionIthPosition(head,i,data);
     Display(head);
}
