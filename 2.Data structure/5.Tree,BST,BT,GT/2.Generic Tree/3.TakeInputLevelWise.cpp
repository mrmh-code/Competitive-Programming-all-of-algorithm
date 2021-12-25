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

TreeNode<int>* TakeInputLevelWise(){
    int rootdata;
    cout<<"Enter root Data"<<endl;
    cin>>rootdata;

    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> q;

    q.push(root);

    while (!q.empty())
    {
         TreeNode<int>* f=q.front();
         q.pop();
         cout<<"Enter of Children no"<<f->data<<endl;

         int n;
         cin>>n;

         for(int i=1; i<=n; i++){
             int children;
             cout<<"Enter "<<i<<" th Children of"<<f->data<<endl;
             cin>>children;

             TreeNode<int>* child=new TreeNode<int>(children);
             q.push(child);
             f->children.push_back(child);
         }
    }
     

     return root;
}


int main()
{
 
    TreeNode<int>* root=TakeInputLevelWise();
    printTree(root);
}