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


Node *takeInput()
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

bool SearchLinkdeditem(Node *head, int x){
 
    while (head!=NULL)
    {
        if (head->data==x)
        {
            return true;
        }
        head=head->next;
        
    }
    return false;
}
 
int main()
{
    Node *head=takeInput();
    int x;
    cin>>x;
   if ( SearchLinkdeditem(head,x))
   {
       cout<<"Item found"<<endl;
   }else{
       cout<<"not found"<<endl;
   }
   
}