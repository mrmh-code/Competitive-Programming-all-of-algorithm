#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
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
        if(head==NULL){
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
    if(head==NULL){
        return 0;
    }

    int smallans=length(head->next);
    return 1+smallans;
}

void print(Node *head){
    while (head)
    {
       cout<<head->data<<" ";
       head=head->next;
    }
    cout<<endl;
}


int main()
{
    Node *head=takeInput();
    cout<<length(head)<<endl;
    print(head);
}