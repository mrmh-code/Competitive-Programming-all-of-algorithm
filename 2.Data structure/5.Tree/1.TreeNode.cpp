#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data){
            this->data=data;

        }
};

void  PrintTree(TreeNode<int>* root){
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size(); i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for(int i=0; i<root->children.size(); i++){
        PrintTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>*root=new TreeNode<int>(1);
    TreeNode<int>* n1=new TreeNode<int>(2);
    TreeNode<int>* n2=new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
    PrintTree(root);
}