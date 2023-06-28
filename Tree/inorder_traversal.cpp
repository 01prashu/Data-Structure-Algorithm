#include<iostream>
#include <stack>
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
    cout<<"Inserting Left Of "<<d<<endl;
    root->left=createTree(root->left);
    cout<<"Inserting Right Of "<<d<<endl;
    root->right=createTree(root->right);
    return root;
}

// void inorder //L-N-R    Left- Node Data - Right
void inorderTraversal(node *root)
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
void preorderTraversal(node *root)
{
    stack<node*>s1;
    if(root == NULL)
    {
        return;
    }

    s1.push(root);
    while(!s1.empty())
    {
        node *temp=s1.top();
        cout<<temp->data<<" ";
        s1.pop();
        if(temp->right !=NULL)
        {
            s1.push(temp->right);
        }
        if(temp->left != NULL)
        {
            s1.push(temp->left);
        }
    }
}
void postorderTraversal(node *root)
{
    //using two stack
    stack<node*>poststack1;
    stack<node *>poststack2;
    poststack1.push(root);
    while(! poststack1.empty())
    {
        node *t=poststack1.top();
        poststack2.push(t);
        poststack1.pop();

        if(t->left != NULL)
        {
            poststack1.push(t->left);
        }
        if(t->right != NULL)
        {
            poststack1.push(t->right);
        }
    }
    while(! poststack2.empty())
    {
        node *t=poststack2.top();
        cout<<t->data<<" ";
        poststack2.pop();
    }
}
// 10 8 5 -1 -1 3 -1 -1 6 4 -1 -1 1 -1 -1

void builtFromLevelOrder(node *&root)
{
    queue<node *>q;
    int d;
    cout<<"Enter root data"<<endl;
    cin>>d;
    root=new node(d);
    q.push(root);

    while( !q.empty())
    {
        int leftdata , rightdata;
        node *temp=q.front();
        q.pop();
        cout<<"Enter Left data for"<<temp->data<<endl;
        cin>>leftdata;
        if(leftdata != -1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter Right data for "<<temp->data<<endl;
        cin>>rightdata;
        if(rightdata != -1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
        
    }
}

//by using low level order
void createTreeDiagram(node *root)
{
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            //seprater present handle this case
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
int main()
{
    node *root=NULL;
    // root=createTree(root);
    // inorderTraversal(root);
    // cout<<endl;
    // preorderTraversal(root);
    // cout<<endl;
    // postorderTraversal(root);

    builtFromLevelOrder(root);
    createTreeDiagram(root);
    return 0;
}