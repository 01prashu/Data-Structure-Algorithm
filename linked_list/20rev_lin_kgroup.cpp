#include<iostream>
using namespace std;
class node
{
    public:
    int data ; 
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert(node *&head , int d)
{
    if(head == NULL)
    {
        node *nn=new node(d);
        head=nn;
        return ;
    }
    node *nn=new node(d);
    node *t=head;
    while(t->next != NULL)
    {
        t=t->next;
    }
    t->next=nn;
}
void dissplay(node *head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
node *kth_rev(node *&head , int k)
{
    node *curr=head;
    node *prev= NULL;
    node *forward= NULL;
    int c=0;

    // step 1 to reverse single group
    while(c <k && curr != NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        c++;
    }
    //step 2 --use recursion to reverse other kth group 
   if(forward != NULL)
   {
    head->next=kth_rev(forward  , k);
   }
    return prev;

}
int main()
{
    node *head=NULL;
    insert(head , 20);
    insert(head ,30);
    insert(head , 40);
    insert(head , 50);
    insert(head , 60);
    insert(head , 70);
    dissplay(head);
    kth_rev(head ,3);
    dissplay(head);
 return 0;
}