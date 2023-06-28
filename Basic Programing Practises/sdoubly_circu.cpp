#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_head(node *&tail , int d)
{
    if(tail==NULL)
    {
        node *nn=new node(d);
        tail=nn;
        nn->next=nn;
        nn->prev=nn;
    }
    else
    {
        node *nn=new node(d);
        nn->next=tail->next;
        nn->prev=tail;
        tail->next->prev=nn;
        tail->next=nn;
        tail=nn;
    }
}
void insert_at(node *&tail , int pos , int d)
{
    if(pos==1)
    {
        insert_head(tail , d);
        return ;
    }
    int c=1;
    node *temp=tail;
    while(c <pos-1)
    {
        temp=temp->next;
        c++;
    }
    node *nn=new node(d);
    nn->next=temp->next;
    temp->next->prev=nn;
    nn->prev=temp;
    temp->next=nn;
}
void display(node *tail)
{
    node *temp=tail;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp !=tail);
    cout<<endl;
}
int main()
{
    node *tail=NULL;
    insert_at(tail ,1 ,10);
    display(tail);
    insert_at(tail , 2, 20);
    insert_at(tail , 3, 30);
    insert_at(tail , 4, 40);
    display(tail);
    return 0;
}