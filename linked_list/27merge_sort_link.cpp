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
node *getmid(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
node *merge(node *&left , node *&right)
{
    //merge sorted 
    if(right == NULL)
    {
        return left;

    }
    if(left == NULL)
    {
        return right;
    }
    node *ans=new node(-1);
    node *tail=ans;
    while(left != NULL && right != NULL)
    {
        if(left->data <= right ->data)
        {
            tail->next=left;
            tail=left;
            left=left->next;

        }
        else
        {
            tail->next=right;
            tail=right;
            right=right->next;

        }
    }
    while(left != NULL)
    {
        tail->next=left;
        tail=left;
        left=left->next;
    }
    while(right != NULL)
    {
        tail->next=right;
        tail=right;
        right=right->next;

    }
    // node *merge_ans=ans->next;
    // delete ans;
    // return merge_ans;
    ans=ans->next;
    return ans;
}
node *merge_sort(node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;

    }
    node *mid=getmid(head);
    node *left=head;
    node *right=mid->next;
    mid->next= NULL;

    left=merge_sort(left);
    right=merge_sort(right);
    node *result=merge(left , right);
    return result;
}
int main()
{
    node *first = NULL;
    node *tail = NULL;
    insert_last(first, tail, 1);
    insert_last(first, tail, 3);
    insert_last(first, tail, 2);
    insert_last(first, tail, 5);
    insert_last(first, tail, 9);
    insert_last(first , tail , 7);
    insert_last(first , tail, 4);
    display(first);
    node *t=merge_sort(first);
    display(t);
    return 0;
}