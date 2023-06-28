#include<iostream>
#include <queue>
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

    cout<<"Inserting left of "<<d<<endl;
    root->left=createTree(root->left);

    cout<<"Inserting right of "<<d<<endl;
    root->right=createTree(root->right);

    return root;

}

void low_order_traversal(node *root)
{ 
    queue<node *>q;
    q.push(root);
    q.push(NULL);//seprater
    while(!q.empty())
    {
        
        node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(! q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left  != NULL)
            {
                q.push(temp->left);
            }
            if(temp->right  != NULL)
            {
                q.push(temp->right);
            }
        }
         
       
    }
}
int main()
{
    node *root=NULL;
    root=createTree(root);
    low_order_traversal(root);
 return 0;
}