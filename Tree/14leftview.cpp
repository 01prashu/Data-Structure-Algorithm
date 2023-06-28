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

void leftview(node *root)
{
    if(root==NULL)
    {
        return;
    }
    map<int , int>leftmap;
    queue<pair<node * , int>>q;
    q.push(make_pair(root , 0));
    vector<int>ans;
    while(!q.empty())
    {
        pair<node * , int>temp=q.front();

        node *leftnode=temp.first;
        int level=temp.second;
        q.pop();
        if(leftmap.find(level)==leftmap.end())
        {
            leftmap[level]=leftnode->data;
        }

        if(leftnode->left != NULL)
        {
            q.push(make_pair(leftnode->left , level +1));
        }
        if(leftnode->right != NULL)
        {
            q.push(make_pair(leftnode->right , level +1));
        }
    }
    for(auto i:leftmap)
    {
        ans.push_back(i.second);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    node *root=NULL;
    root=createTree(root);
    leftview(root);
    return 0;
}