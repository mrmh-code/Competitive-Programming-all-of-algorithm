#include <bits/stdc++.h>
using namespace std;

template<typename T>
class BTNode{
    public:
        T data;
        BTNode* left;
        BTNode* right;
    
    BTNode(T data){
        this->data=data;
        left = NULL;
        right =NULL;
    }


};

BTNode<int>* TakeInput()
{
    int rootdata;
    cout<<"Enter Data "<<endl;
    cin>>rootdata;

    if(rootdata==-1){
        return NULL;
    }

    BTNode<int>* root=new BTNode<int>(rootdata);
    BTNode<int>* leftChild=TakeInput();
    BTNode<int>* rightChild=TakeInput();
    
    root->left=leftChild;
    root->right=rightChild;
    return root;
}

void PrintTree(BTNode<int>* root)
{
    if(root==NULL){
        return ;
    }

    cout<<root->data<<endl;
    
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }

    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }

    cout<<endl;

    PrintTree(root->left);
    PrintTree(root->right);
}

int main()
{
    BTNode<int>* root=TakeInput();
    PrintTree(root);

     


}
