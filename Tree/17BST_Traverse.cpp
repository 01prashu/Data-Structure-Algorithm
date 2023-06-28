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
void inorder_traversal(node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
    
}
void preorder_traversal(node *root)
{
    //L-R - N
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
    

}
void postorder_traversal(node *root)
{
    if(root == NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
    
}
bool search_in_bst(node *root , int key)
{
    if(root == NULL)
    {
        return false;
    }
    node *temp=root;
    while(temp != NULL)
    {
        
        
        if(temp->data == key)
        {
            return true;
        }
        // if temp->data is less than key means key is in right part..
        if(temp->data > key)
        {
            //key is greater than root->data then then we have to move in right of root
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    return false;
}
int main()
{
    node *root=NULL;
    input_data(root);
    low_order_traverse(root);
    cout<<search_in_bst(root , 14);
    cout<<"Inorder Traversal"<<endl;
    inorder_traversal(root);
    cout<<endl;
    cout<<"Postorder Traversal"<<endl;
    postorder_traversal(root);
    cout<<endl;
    cout<<"Preorder Traversal"<<endl;
    preorder_traversal(root);
    return 0;
}