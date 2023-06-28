#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node (int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node *createTree(node *root)
{
    int d;
    cout<<"Enter data"<<endl;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Insert left of "<<d<<endl;
    root->left=createTree(root->left);

    cout<<"insert Right of "<<d<<endl;
    root->right=createTree(root->right);
    // 10 8 6 -1 -1  5 -1 -1 7 3 -1 -1 4 -1 -1

    return root;
}

void inorderdTraversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorderdTraversal(root->left);
    cout<<root->data<<" ";
    inorderdTraversal(root->right);
   
}
void preorderdTraversal(node *root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorderdTraversal(root->left);
    preorderdTraversal(root->right);
}
void postorderdTraversal(node *root)
{
    if(root == NULL)
    {
        return ;
    }
    postorderdTraversal(root->left);
    postorderdTraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node *root=NULL;
    root=createTree(root);
    inorderdTraversal(root);
    cout<<endl;
    preorderdTraversal(root);
    cout<<endl;
    postorderdTraversal(root);
 return 0;
}