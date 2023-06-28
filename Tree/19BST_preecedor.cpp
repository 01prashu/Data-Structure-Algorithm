#include<iostream>
#include <queue>
#include<vector>
#include<stack>
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
node *create_Bst(node *root , int d)
{
    if(root== NULL)
    {
        node *nn=new node(d);
        return root;
    }
    if(d>root->data)
    {
        root->right=create_Bst(root->right , d);
    }
    else
    {
        root->left=create_Bst(root->left , d);
    }
    return root;
}
void input_data(node *&root)
{
   
    int d;
    cin>>d;
    while(d != -1)
    {
        root=create_Bst(root , d);
        
        cin>>d;
    }
}

void inorderTraversal(node *&root)
{
    stack<node *>s;
    node *curr=root;
    while(curr != NULL || (!s.empty()))
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr=curr->left;   
        }

        curr=s.top();
        cout<<curr->data<<" ";
        s.pop();
        
        curr=curr->right;
    }
}
int main()
{
    node *root=NULL;
    input_data(root);
    inorderTraversal(root);

    return 0;
}