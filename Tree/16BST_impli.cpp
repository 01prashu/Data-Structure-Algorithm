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
node *create_BST(node *root , int d)
{
    if(root == NULL)
    {
        root=new node(d);
        return root;
    }

    //if data is greater than root->data then we have to move right of root

    if(d >root->data)
    {
        root->right=create_BST(root->right , d);
    }

    //if data is less than or equal to root->data then move left side of root
    else
    {
        root->left=create_BST(root->left , d);
    }
    return root;
}
void input_data(node *&root)
{
    int d;
    cin>>d;
    while(d != -1)
    {
        root=create_BST(root , d);
        cin>>d;
    }
}

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
int main()
{
    node *root= NULL;
    cout<<"Insert data for BST"<<endl;
    input_data(root);
    low_order_traversal(root);
    return 0;
}