#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insert_last(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *nn = new node(d);
        head = nn;
        tail = nn;
    }
    else
    {
        node *nn = new node(d);
        node *t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = nn;
        tail = nn;
    }
}
void insert_head(node *&head , int d)
{
    node *t=new node(d);
    t->next=head;
    head=t;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
node * solve(node *first , node *second)
{
    node *curr1=first;
    node *next1=curr1->next;
    node *curr2=second;
    node *next2=curr2->next;

    while( curr2!= NULL && (curr1 !=NULL))
    {
        if(curr2->data >=curr1->data && curr2->data <=next1->data)
        {
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            curr1=curr2;
            curr2=next2;
        }
        else
        {
            curr1=next1;
            next1=next1->next;
            if(next1 == NULL)
            {
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}
node *merge(node *first , node *second)
{
    if(first == NULL)
    {
        return second;
    }
    else if(second == NULL)
    {
        return first;
    }
    else if(first->data <=second->data)
    {
        return solve(first , second);
    }
    else if(second->data <=first->data)
    {
        return solve(second , first);
    }
}
int main()
{
    node *first = NULL;
    node *tail = NULL;
    insert_last(first, tail, 1);
    insert_last(first, tail, 3);
    insert_last(first, tail, 5);
    insert_last(first, tail, 7);
    insert_last(first, tail, 9);
    
    display(first);

    node *second=new node(9);
    insert_head(second ,6 );
    insert_head(second ,2);
    display(second);
    node *t = merge(first , second);
    display(t);
    return 0;
}
