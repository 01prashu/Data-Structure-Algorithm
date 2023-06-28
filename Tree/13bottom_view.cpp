#include<iostream>
using namespace std;
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
void bottomview(node *root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return;
    }
    map<int , int>bottommap;
    queue<pair<node * , int>>q;
    q.push(make_pair(root , 0));
    while(!q.empty())
    {
        pair<node *, int>temp=q.front();
        node *bottomnode=temp.first;
        int hd=temp.second;
        q.pop();
        bottommap[hd]=bottomnode->data;
        if(bottomnode->left)
        {
            q.push(make_pair(bottomnode->left , hd-1));
        }
        if(bottomnode->right)
        {
            q.push(make_pair(bottomnode->right , hd+1));
        }
    }
    for(auto i:bottommap)
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
    node*root=NULL;
    root=createTree(root);
    bottomview(root);
 return 0;
}