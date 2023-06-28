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

bool check_palindrome(node *head)
{
    node *t = head;
    int size = 0;
    while (t != NULL)
    {
        size++;
        t = t->next;
    }
    int arr[size];
    t = head;
    int i = 0;
    // stored element in array
    while (t != NULL)
    {
        int v = t->data;
        arr[i] = v;
        t = t->next;
        i++;
    }
    // check array is palindrome
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Another approhce
node *getmiddle(node *head)
{
    node *slow = head;
    node *fast = head;
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
node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool is_it_palindrome(node *head)
{
    node *middle = getmiddle(head);
    node *t = middle->next;
    middle->next = reverse(t);

    node *curr1=head;
    node *curr2=middle->next;
    while(curr1 != middle)
    {
        if(curr1 ->data == curr2->data)
        {
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    node *first = NULL;
    node *tail = NULL;
    insert_last(first, tail, 1);
    insert_last(first, tail, 3);
    insert_last(first, tail, 2);
    insert_last(first, tail, 5);
    insert_last(first, tail, 1);
    display(first);
    // bool t = check_palindrome(first);
    // cout<<t<<endl;
    bool check =is_it_palindrome(first);
    cout<<check<<endl;
    return 0;
}