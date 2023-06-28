#include<iostream>
#include <queue>
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
node *create_bst(node *root , int d)
{
    if(root == NULL)
    {
        root=new node(d);
        return root ;
    }
    if(d >root->data)
    {
        root->right=create_bst(root->right , d);
    }
    else
    {
        root->left=create_bst(root->left , d);
    }
    return root;
}
void lowOrderTraversal(node *&root)
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
void input_data(node *&root )
{
    int d;
    cin>>d;
    while( d!= -1)
    {
        root=create_bst(root , d);
        cin>>d;
    }
}
//approch use inorder traversal then stored in array using searching methode find preecedor
void find_precedor(vector<int>ans , int key)
{
    int index=2;
    //use binary search to get index of key , once we get index of key then index of key minus one in preecedor of tree

    int low=0;
    int high=ans.size()-1;
    int mid=(low + high)/2;
    while(low <=high)
    {
        if(ans[mid]==key)
        {
            index=mid;
        }
        else if(ans[mid] >key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=(low + high)/2;
    }
    cout<<ans[index-1]<<endl;
}
vector<int> inorder_precedor(node *root , int key )
{

    vector<int>ans;
    if(root->left == NULL)
    {
        return ans;
    }
    inorder_precedor(root->left , key );
    ans.push_back(root->data);
    // cout<<root->data<<" ";
    inorder_precedor(root->right , key );
    return ans;
    // find_precedor(ans , key);
    // for(int i=0;i<ans.size() ;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // return ans;
//    return ans;
}

int main()
{
    vector<int>ans;
    int key=6;
    node *root=NULL;
    input_data(root);
    lowOrderTraversal(root);
    ans =inorder_precedor(root , key);
    // inorder_precedor(root , key);
    for(int i=0;i<ans.size() ;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}