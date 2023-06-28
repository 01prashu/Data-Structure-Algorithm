#include<iostream>
using namespace std;

//insert in linked list after a element
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
void insertnode(node *&tail , int ele , int data)
{
    if(tail==NULL)
    {
        node *newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node *current=tail;
        while(current->data !=ele)
        {
            current=current->next;
        }
        node *nn=new node(data);
        nn->next=current->next;
        current->next=nn;

    }
}
void display(node *tail)
{
    node *t=tail;
    do
    {
        cout<<tail->data<<"->";
        tail=tail->next;

    } while (tail != t);
    cout<<endl;
}

void search(node *tail)
{
    node*temp=tail;
    while(temp->next !=tail)
    {
        if(temp->data==3)
        {
            cout<<"3 is prsent "<<endl;
            break;
        }
        temp=temp->next;

    }
}
bool is_circular(node *head )
{
    if(head == NULL)
    {
        return true;
    }
    node *t=head->next;
    while(t !=NULL && t->next != head)
    {
        t=t->next;
    }
    if(t==NULL)
    {
        return false;
    }
    return true;
}
int main()
{
    node *tail=NULL;
    insertnode(tail ,5 ,1);
    insertnode(tail ,1 ,2);
    insertnode(tail ,2 ,4); 
    // display(tail);
    insertnode(tail ,2,3);
    display(tail);
    search(tail);
    cout<<is_circular(tail)<<endl;
    return 0;
}