#include <iostream>
#include <map>
using namespace std;
/*
Remove Duplicate From sorted LinkedList
Apporoches
1)Check data with next node if duplicate found then remove next node
2)Using map if node visited first time then make it as true if it is already true then delete those node
*/
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
void display(node *&head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << endl;
}
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
node *remove_dupli(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            node *nodetodelete = curr->next;
            node *next_node = curr->next->next;
            delete nodetodelete;
            curr->next = next_node;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

node *removed_dupli_by_map(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    map<int , bool>visited;
    node *curr=head;
    node *prev=NULL;
    while(curr != NULL)
    {
        if(visited[curr->data]==true)
        {
            prev->next=curr->next;
        }
        else
        {
            visited[curr->data]=true;
            prev=curr;
        }
        curr=prev->next;
    }
    return head;
}
node *remove_dupli_by_bruteforce(node *&head)
{
    if(head == NULL)
    {
        return NULL;
    }
    node *ptr1 , *ptr2 , *dupli;
    ptr1=head;
    while(ptr1 != NULL )
    {
        ptr2=ptr1;
        while(ptr2->next != NULL)
        {
            if(ptr1->data == ptr2->next->data)
            {
                dupli=ptr2->next;
                ptr2->next=ptr2->next->next;
                delete dupli;
            }
            else
            {
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return head;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    insert_last(head, tail, 5);

    insert_last(head, tail, 2);
    insert_last(head, tail, 6);
    insert_last(head, tail, 2);
    display(head);
    // node * t= remove_dupli(head);
    // display(t);
    // node *te = removed_dupli_by_map(head);
    node *t=remove_dupli_by_bruteforce(head);
    display(t);

    return 0;
}