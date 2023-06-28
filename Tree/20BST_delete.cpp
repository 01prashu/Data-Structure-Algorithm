#include<iostream>
#include <queue>
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
        node *nn=new node(d);
        root=nn;
        return root;
    }
    if( d > root->data)
    {
        root->right=create_bst(root->right , d);
    }
    else
    {
        root->left=create_bst(root->left , d);
    }
    return root;
}

void inputData(node *&root)
{
    int d;
    cin>>d;
    while( d != -1)
    {
        root=create_bst(root , d);
        cin>>d;
    }
}

//low order traversal

void low_order_traversal(node *root)
{
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        if(temp == NULL)
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
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int getmax(node *root)
{
    int ans=-1;
    if(root->right== NULL)
    {
        return ans;
    }
    node *temp=root;
    while(temp != NULL)
    {
        temp=temp->right;
    }
    ans=temp->data;
    return ans;
}
node *delete_nodeofroot(node *root , int key)
{
    //key is value which we have to delete
    if(root == NULL)
    {
        return root;
    }
    if(root->data == key)
    {
        //bst has zero child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL)
        {
            node *temp=root->left;
            delete root;
            return temp;
        }
        else if(root->right != NULL && root->left == NULL)
        {
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right != NULL)
        {
            int maxvalue=getmax(root->left);
            root->data=maxvalue;
            root->left=delete_nodeofroot(root->left ,maxvalue);
            return root;
        }
    }
    else if( key > root->data)
    {
        root->right=delete_nodeofroot(root->right , key);
        return root;
    }
    else
    {
        root->left=delete_nodeofroot(root->left , key);
        return root;
    }
}
int main()
{
    node *root=NULL;
    inputData(root);
    low_order_traversal(root);
    delete_nodeofroot(root , 4);
    low_order_traversal(root);
    return 0;
}