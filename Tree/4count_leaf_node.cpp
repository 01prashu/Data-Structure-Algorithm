#include<iostream>
#include <stack>
#include <queue>
using namespace std;
//count leaf node in tree
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
void  inorderTraversal(node *root , int &c)
{
    
    stack<node *>s;
    node *curr=root;
    while(curr != NULL || s.empty())
    {
        
        while(curr != NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        
        node *t=s.top();
        
        s.pop();
        
        curr=curr->right;
        
    // if(root == NULL)
    // {
    //     return;
    // }
    // inorderTraversal(root->left , c);
    // if(root->left == NULL && root->right == NULL)
    // {
    //     c++;
    // }
    // inorderTraversal(root->right  , c);

    }
    
}
node * buildtree(node *root)
{
    queue<node *>q;
    int d;
    cout<<"Enter data"<<endl;
    cin>>d;
    root=new node(d);
    q.push(root);
    while(!q.empty())
    {
        node *t=q.front();
        q.pop();
        int leftdata , rightdata;
        cout<<"Enter left data for"<<t->data<<endl;
        cin>>leftdata;
        if(leftdata != -1)
        {
            t->left=new node(leftdata);
            q.push(t->left);
        }
        cout<<"Enter Right data for "<<t->data<<endl;
        cin>>rightdata;
        if(rightdata != -1)
        {
            t->right=new node(rightdata);
            q.push(t->right);
        }
    }
    return root;
}
int main()
{
    node *root=NULL;
    root = buildtree(root);
    int c=0;
    inorderTraversal(root , c);
    cout<<c<<endl;
 return 0;
}