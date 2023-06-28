#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert(node *&head, int d)
{
    node *nn= new node(d);
    nn->next=head;
    head=nn;
}
void display(node *head)
{
    node *temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

// mid element means we have to written middle node
int getlen(node *&head)
{
    node *temp=head;
    int c=0;
    while(temp != NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}

// another approch
node *mid_approch2(node *&head)
{
    if(head== NULL || head->next== NULL)
    {
        return head;
    }

    node *slow=head;
    node *fast=slow->next;
    while(fast != NULL)
    {
        fast=fast->next;
        if(fast != NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
node *mid(node *&head )
{
    // int len=getlen(head);
    // len=(len/2)+1;
    // int c=1;
    // node *t=head;
    // while(c<len)
    // {
    //     t=t->next;
    //     c++;
    // }
    // return t;
}
int main()
{
    node *head=new node(10);
    insert(head , 20);
    insert(head , 30);
    
   
    
    display(head);
    // node *t=mid(head);
    node *t=mid_approch2(head);
    cout<<t->data<<endl;
 return 0;
}