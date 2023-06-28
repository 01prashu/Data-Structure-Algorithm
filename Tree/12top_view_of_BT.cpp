#include<iostream>
#include<queue>
#include <map>
#include <vector>
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
    if(d==-1)
    {
        return NULL;
    }
    root=new node(d);

    
    cout<<"Insert Left Of "<<d<<endl;
    root->left=createTree(root->left);

    cout<<"Insert Right Of "<<d<<endl;
    root->right=createTree(root->right);

    return root;
}
void topViewtree(node *root)
{
    
    if(root==NULL)
    {
        return;
    }
    map<int , int>TopNode;
    queue<pair<node * , int>>q;
    q.push(make_pair(root , 0));
    vector<int>ans;
    
    while(!q.empty())
    {
        pair<node* , int>temp=q.front();
        node *frontnode=temp.first;
        int hd=temp.second;
        q.pop();
        if(TopNode.find(hd)==TopNode.end())
        {
            TopNode[hd]=frontnode->data;
            
        }
        if(frontnode->left)
        {
            q.push(make_pair(frontnode->left , hd-1));
        }
        if(frontnode->right)
        {
            q.push(make_pair(frontnode->right , hd+1));
        }

    }
    
    for(auto i:TopNode)
    {
        ans.push_back(i.second);
    }
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
int main()
{
    node *root=NULL;
    root=createTree(root);
    topViewtree(root);
    return 0;
}