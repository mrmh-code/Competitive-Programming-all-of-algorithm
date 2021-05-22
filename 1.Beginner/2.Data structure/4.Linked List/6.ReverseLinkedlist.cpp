#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
    Node(int data){
        this->data=data;
    }
};

Node* Takeinput()
{
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
            n->next=head;
            head=n;
        }
        cin>>data;

    }
    return head;
    
}

void Display(Node *p)
{
    while (p!=NULL)
    {
      cout<<p->data<<" ";
      p=p->next;
    }
    cout<<endl;
    
}
int main()
{
    Node *head=Takeinput();
    Display(head);
}