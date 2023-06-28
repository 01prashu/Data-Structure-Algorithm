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
void insert_after (node *&tail , int value , int d)
{
    if(tail==NULL)
    {
        node *nn= new node(d);
        tail=nn;
        nn->next=nn;
        return ;
    }
    node *t=tail;
    while(t->data != value)
    {
        t=t->next;
    }
    node *nn=new node(d);
    nn->next=t->next;
    t->next=nn;
}
void display(node *tail)
{
    node *t=tail;
    do
    {
        cout<<t->data<<" ";
        t=t->next;
    } while (t !=tail);
    cout<<endl;

}
int main()
{
   
    node *tail=NULL;
    insert_after(tail , 1 , 10);
    display(tail);
    insert_after(tail , 10 , 20);
    insert_after(tail , 20 ,30);
    display(tail);
    return 0;
}