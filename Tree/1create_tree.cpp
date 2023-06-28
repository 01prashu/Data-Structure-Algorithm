#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node *create_tree(node *root)
{
    int d;
    cout<<"Enter data"<<endl;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Enter data for inserting  in left "<<d<<endl;
    root->left=create_tree(root->left);
    cout<<"Enter data for inserting in right"<<d<<endl;
    root->right=create_tree(root->right);
}
int main()
{
    node *root=NULL;
    root=create_tree(root);
    return 0;
}