#include<iostream>
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
void rightview(node *root)
{
    if(root==NULL)
    {
        return;
    }
    map<int , int>rightmap;
    queue<pair<node * , int>>q;
    q.push(make_pair(root , 0));
    vector<int>ans;
    while(!q.empty())
    {
        pair<node * , int>temp=q.front();
        q.pop();
        node *rightnode=temp.first;
        int level=temp.second;

        rightmap[level]=rightnode->data;
        if(rightnode->left)
        {
            q.push(make_pair(rightnode->left , level +1));
        }
        if(rightnode->right)
        {
            q.push(make_pair(rightnode->right , level+1));
        }
    }
    for(auto i:rightmap)
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
    rightview(root);
 return 0;
}