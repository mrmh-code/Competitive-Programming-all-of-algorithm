#include <bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*>children;
        TreeNode(T data){
            this->data=data;
        }
};

void printTree(TreeNode <int>* root)
{
    cout<<root->data<<" :";
    for(int i=0; i<root->children.size(); i++){
        cout<<root->children[i]->data<<" ,";
    }

    cout<<endl;

    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}


TreeNode<int>* takeinput()
{
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;

    TreeNode<int>* root=new TreeNode<int>(rootdata);

    int n;
    cout<<"Enter num of Children of "<<rootdata<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        TreeNode<int>* child=takeinput();
        root->children.push_back(child);
    }

    return root;
}


int main()
{
    // TreeNode<int>* root=new TreeNode<int>(1);
    // TreeNode<int>* n1=new TreeNode<int>(2);
    // TreeNode<int>* n2=new TreeNode<int>(3);

    // root->children.push_back(n1);
    // root->children.push_back(n2);

    TreeNode<int>* root=takeinput();
    printTree(root);
}