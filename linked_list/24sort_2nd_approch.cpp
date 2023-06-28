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
void insert_last(node *&curr , node *&tail)
{
    tail->next=curr;
    tail=curr;
}
node *sort(node *&head)
{
    node *dummy_zero = new node(-1);
    node *dummy_one = new node(-1);
    node *dummy_two = new node(-1);
    node *tail_zero = dummy_zero;
    node *tail_one = dummy_one;
    node *tail_two = dummy_two;

    node *curr=head;
    while(curr != NULL)
    {
        int value=curr->data;
        if(value == 0)
        {
            insert_last(curr , tail_zero);
        }
        else if(value == 1)
        {
            insert_last(curr , tail_one);
        }
        else if(value==2)
        {
            insert_last(curr , tail_two);
        }
        curr=curr->next;
    }
    //now we have to merge
    tail_zero->next=dummy_one->next;
    tail_one->next=dummy_two->next;
    tail_two->next=NULL;

    head=dummy_zero->next;

    delete dummy_zero;
    delete dummy_one ; 
    delete dummy_two ;
    
    return head;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insert_last(head, tail, 1);
    insert_last(head, tail, 0);
    insert_last(head, tail, 2);
    insert_last(head, tail, 0);
    insert_last(head, tail, 0);
    insert_last(head, tail, 2);
    insert_last(head, tail, 1);
    display(head);
    node *t = sort(head);
    display(t);
    return 0;
}
