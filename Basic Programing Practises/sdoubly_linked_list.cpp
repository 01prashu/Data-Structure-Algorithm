#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(node *&head, node *&tail, int d)
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
        head->prev = nn;
        nn->next = head;
        head = nn;
    }
}
void insert_end(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *nn = new node(d);
        head = nn;
        tail = nn;
    }
    else
    {
        node *nn = new node(d);
        tail->next = nn;
        nn->prev = tail;
        nn->next = NULL;
        tail = nn;
    }
}
void insert_at(node *&head, node *&tail, int pos, int d)
{

    if (pos == 1)
    {
        insert_head(head, tail, d);
        return;
    }
    int c = 1;
    node *p = NULL;
    node *t = head;
    while (c < pos - 1)
    {
        p = t;
        t = t->next;
        c++;
    }
    if (t->next == NULL)
    {
        insert_end(head, tail, d);
        return;
    }
    node *nn = new node(d);
    nn->next = t->next;
    t->next->prev = nn;
    p->next = nn;
    nn->prev = p;
}
void dis(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// insertion by value
node *insert_after(node *&head, node *&tail, int value, int d)
{
    if (head == NULL)
    {
        node *nn = new node(d);
        head = nn;
        tail = nn;
    }
    else
    {
        node *curr = head;
        while (curr->data != value)
        {
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            node *nn = new node(d);
            curr->next = nn;
            nn->prev = curr;
            tail = nn;
        }
        else
        {
            node *nn = new node(d);
            nn->next = curr->next;
            curr->next->prev = nn;
            nn->prev = curr;
            curr->next = nn;
        }
    }
}
int main()
{
    node *first = NULL;
    node *head = first;
    node *tail = first;
    insert_at(head, tail, 1, 10);
    insert_at(head, tail, 2, 20);
    dis(head);
    insert_at(head, tail, 3, 30);
    dis(head);
    insert_after(head, tail, 20, 200);
    insert_after(head, tail, 30, 40);
    dis(head);
    insert_after(head , tail , 10 , 100);
    dis(head);

    return 0;
}