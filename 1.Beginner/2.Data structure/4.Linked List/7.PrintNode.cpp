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

int length(Node *head){
    int count=0;
    while (head!=NULL)
    {    count++;
       head=head->next;
    }
    return count;
    
}

void printIthNode(Node *head, int i){
    int n=length(head);
    if (i<0 ||i>n-1)
    {
      cout<<"-1"<<endl;
      return;
    }

    int count=1;
    while (count<=i)
    {
        head=head->next;
        count++;
    }
    cout<<head->data<<endl;
   
    
}

int main()
{
    Node *head=takeInput();
    printIthNode(head,5);
}