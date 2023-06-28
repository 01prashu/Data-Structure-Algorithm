#include<iostream>
#include <queue>
#include <stack>
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
node *CreateTree(node *root)
{
     int d;
    cout<<"Enter Data"<<endl;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Enter left data of "<<d<<endl;
    root->left=CreateTree(root->left);

    cout<<"Enter Right data of "<<d<<endl;
    root->right=CreateTree(root->right);
    return root;

}
void *DisplayTree(node *root)
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
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    int h1=height(root->left);
    int h2=height(root->right);
    int ans=max(h1+1 , h2+1);

    return ans;
}


int main()
{
    node *root=NULL;
    root=CreateTree(root);
    DisplayTree(root);
    cout<<height(root);
 return 0;
}