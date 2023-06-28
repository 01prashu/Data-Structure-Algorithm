#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    node*next;
    ~node()
    {
        this->next=NULL;
    }

};
node *front=NULL;
node *rear=NULL;
void insert(node* &front ,node *&rear, int x)
{
    node*newnode=new node(x);
    rear->next=newnode;
    rear=newnode;
}
void remove_front(node *&front , node *&rear )
{
    node *temp=front;
    front=front->next;
    delete temp;
}
void display(node *front)
{
    node *t=front;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    node *head=new node(10);
    node*front;
    node*rear;
    front=head;
    rear=head;
    insert(front ,rear ,20);
    insert(front , rear ,30);
    insert(front , rear , 40);
    display(front);
    remove_front(front , rear);
    display(front);
 return 0;
}