#include<iostream>
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
    cout<<"Enter Data"<<endl;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Insert Left Of "<<d<<endl;
    root->left=createTree(root->left);

    cout<<"Insert  Right Of "<<d<<endl;
    root->right=createTree(root->right);

    return root;
}

//Diameter of tree means ki longest distance between two node
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
int DiameterOFTree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int d1=DiameterOFTree(root->left);
    int d2=DiameterOFTree(root->right);
    int h12=height(root->left) + height(root->right)+1;

    int ans=max(d1 , max(d2 , h12));
    return ans;
}

pair<int , int>DiameterFast(node *root)
{
    if(root == NULL)
    {
        pair<int , int>p=make_pair(0 , 0);
        return p;
    }
    
    pair<int , int>left=DiameterFast(root->left);

    pair<int , int>right=DiameterFast(root->right);

    int d1=left.first;
    int d2=right.first;

    int h12=left.second + right.second +1;
    
    pair<int , int>ans;
    ans.first=max(d1 , max(d2 , h12));
    ans.second=max(left.second+1  ,right.second+1);
    return ans;
}

int giveDiameter(node *root)
{
    return DiameterFast(root).first;
}
int main()
{
    node *root=NULL;
    root = createTree(root);
    cout<<DiameterOFTree(root);
    cout<<endl;
    cout<<giveDiameter(root);

    vector<int>v;
    v.push_back
    return 0;
}