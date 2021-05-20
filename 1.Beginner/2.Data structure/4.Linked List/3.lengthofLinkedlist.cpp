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

Node* takeInput()
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
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

int length(Node *head){
    int count=0;
    while (head!=NULL)
    {    count++;
       head=head->next;
    }
    return count;
    
}

void print(Node *p){
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
};
int main()
{
    Node *head=takeInput();
    // print(head);
    cout<<length(head)<<endl;
}