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
       }
       else{
           tail->next=n;
           tail=n;
       }
       cin>>data;
       
    }
    return head;
}

Node* DeleteNodeIthPos(Node* head, int i){
    if (i<0)
    {
         return head;
    }
    if (i==0 && head)
    {
        return head->next;
    }

    Node* curr =head;
    int count=1;
    while (count<=i-1 && curr!=NULL)
    {
         curr=curr->next;
         count++;
    }

    if (curr && curr->next)
    {
       curr->next=curr->next->next;
       return head;
    }
    
    return head;
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
    int i;
    cin>>i;
    head=DeleteNodeIthPos(head,i);
    Display(head);
}