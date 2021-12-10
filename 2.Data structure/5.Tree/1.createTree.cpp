#include <iostream>
using namespace std;

typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
};


Node *createNode(int item)
{
    Node *new_node=new Node();
    if (new_node==NULL)
    {
        printf("Error! Cloud Not Create A New Node \n");
    }
    
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child){
    node->left=child;
}

void add_right_child(Node *node, Node *child){
    node->right=child;
}


Node *create_tree()
{
    Node *two=createNode(2);
    Node *seven=createNode(7);
    Node *nine=createNode(9);
    add_left_child(two,seven);
    add_right_child(two,nine);
    
    Node *one=createNode(1);
    Node *six=createNode(6);
    add_left_child(seven,one);
    add_right_child(seven,six);

    Node *five=createNode(5);
    Node *ten=createNode(10);
    add_left_child(six,five);
    add_right_child(six,ten);

    Node *eight=createNode(8);
    add_right_child(nine,eight);

    Node *three=createNode(3);
    Node *four=createNode(4);
    add_left_child(eight,three);
    add_right_child(eight,four);

    return two;

}

int main()
{
    Node *root=create_tree();
    cout<<root->data;
    cout<<endl;
    

}