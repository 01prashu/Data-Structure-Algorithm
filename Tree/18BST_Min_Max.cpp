#include<iostream>
#include<queue>
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
node *create_bst(node *root , int d)
{
    if(root == NULL)
    {
        root=new node(d);
        return root;
    }
    if(d < root->data)
    {
        root->left=create_bst(root->left ,d);
    }
    else
    {
        root->right=create_bst(root->right , d);
    }
    return root;
}
void input_data(node *&root)
{
    int d;
    cin>>d;
    while(d != -1)
    {
        root=create_bst(root , d);
        cin>>d;
    }
}
void low_order_traverse(node *&root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
int mindata_ofbst(node *root)
{
    int ans=-1;
    node *temp=root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }
    ans=temp->data;
    return ans;
}
int maxdata_ofbst(node *root)
{
    int ans=-1;
    node *temp=root;
    while(temp->right != NULL)
    {
        temp=temp->right;
    }
    ans=temp->data;
    return ans;
}
int main()
{
    node *root=NULL;
    input_data(root);
    low_order_traverse(root);
    cout<<mindata_ofbst(root)<<endl;
    cout<<maxdata_ofbst(root)<<endl;
    return 0;
}