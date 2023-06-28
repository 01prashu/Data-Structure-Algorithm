//insert
//display
//delete
//reverse
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert_head(node *&head , node *&tail , int d)
{
    if(head==NULL)
    {
        node *nn=new node(d);
        head=nn;
        tail=nn;
    }
    else
    {
        node *nn=new node(d);
        nn->next=head;
        head=nn;
    }
}
void display(node *&head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
void insert_last(node *&head , node *&tail , int d)
{
    if(head==NULL)
    {
        node *nn=new node(d);
        head=nn;
        tail=nn;
    }
    else
    {
        node *nn=new node(d);
        node *t=head;
        while(t->next !=NULL)
        {
            t=t->next;
        }
        t->next=nn;
        tail=nn;
    }
}
void dele(node *&head , node *&tail , int value)
{
    if(head==NULL && tail==NULL)
    {
        cout<<"linked list is empty"<<endl;
    }
    node *curr=head;
    node *temp=head;
    node *prev=NULL;
    // #value must be in linked list
    // while(curr->data !=value)
    // {
    //     prev=curr;
    //     curr=curr->next;
    // }
    // prev->next=curr->next;
    // curr->next=NULL;
    // delete curr

  
    
}

//
int main()
{
    node *first=NULL;
    node *head=first;
    node *tail=first;
    // insert_head(head , tail ,10);
    // display(head);
    // insert_head(head ,tail , 20);
    // insert_head(head , tail ,30);
    // insert_head(head , tail , 40);
    // display(head);
    insert_last(head , tail ,10);
    display(head);
    insert_last(head , tail , 20);
    insert_last(head , tail ,30);
    insert_last(head ,tail ,40);
    display(head);

    cout<<"tail:"<<tail->data<<endl;
    cout<<"head:"<<head->data<<endl;
    dele(head , tail ,20);
    display(head);
    return 0;
}
