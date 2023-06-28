#include <iostream>
#include <map>
using namespace std;
// To detect loop 
// Approch 1: Using map 
// Approch 2: Floid's cycle detection algorthim
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert_head(node *&head , node *&tail , int d)
{
    if(head==NULL)
    {
        node *nn=new node(d);
        head=nn;
        tail=nn;
    }
    else
    {
        node *nn=new node(d);
        nn->next=head;
        head=nn;
    }
}
void display(node *&head)
{
    node *t=head;
    while(t !=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<endl;
}
void insert_last(node *&head , node *&tail , int d)
{
    if(head==NULL)
    {
        node *nn=new node(d);
        head=nn;
        tail=nn;
    }
    else
    {
        node *nn=new node(d);
        node *t=head;
        while(t->next !=NULL)
        {
            t=t->next;
        }
        t->next=nn;
        tail=nn;
    }
}

bool isloop(node *head)
{
    map<node * , bool> visited;
    node *temp=head;
    while(temp != NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

// 2nd approch to check whether linkedlist form loop or not -if slow == fast return those node
node *getfloidloop_value(node *head)
{
    if(head == NULL )
    {
        return NULL;
    }
    node *slow=head;
    node *fast = head;
    while(slow != NULL && fast != NULL)
    {
        fast=fast->next;
        if(fast != NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow == fast)
        {
            return slow;
        }

    }
    return head;
}

// find start of loop using floid algorithm
node *getstartofLoop(node *head)
{
    node *intersection_point=getfloidloop_value(head);
    node *fast=intersection_point;
    node *slow=head;
    while(fast != slow)
    {
        fast=fast->next;
        slow=slow->next;
        if(fast== slow)
        {
            return slow;
        }
    }
    return head;
}
// remove floid's loop 
node *remove_floid_loop(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    node *start_loop_node=getstartofLoop(head);
    node *temp=start_loop_node;
    while(temp->next != start_loop_node)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}


//loop detection approches by modifying value
bool loop_detect_byvalue(node *head)
{
    if(head == NULL)
    {
        return false;
    }
    node *t=head;
    while(t != NULL)
    {
        if(t->data == -1)
        {
            return true;
        }
        t->data=-1;
        t=t->next;
    }
    return false;
}
int main()
{
    node *first=NULL;
    node *head=first;
    node *tail=first;
    
    insert_last(head , tail ,10);
    display(head);
    insert_last(head , tail , 20);
    insert_last(head , tail ,30);
    insert_last(head ,tail ,40);
    insert_last(head , tail ,50);
    display(head);
    tail->next=head->next->next;
    if(isloop(head)==true)
    {
        cout<<"Loop is present"<<endl;
    }
    else
    {
        cout<<"Loop is not present"<<endl;
    }
    node * t=getfloidloop_value(head);
    if(t!=head)
    {
        cout<<"Loop is present confirm using floid's loop contained value: "<<t->data<<endl;
    }
    else
    {
        cout<<"loop is not form confirm usinf floid's loop detection"<<endl;
    }
    node * t=getfloidloop_value(head);
    node *te=getstartofLoop(head);
    cout<<te->data<<endl;
    node *singly_ll=remove_floid_loop(head);
    display(singly_ll);
    // if(isloop(head)==true)
    // {
    //     cout<<"Loop is present"<<endl;
    // }
    // else
    // {
    //     cout<<"Loop is not present"<<endl;
    // }
     t=getfloidloop_value(head);
    if(t!=head)
    {
        cout<<"Loop is present confirm using floid's loop contained value: "<<t->data<<endl;
    }
    else
    {
        cout<<"loop is not form confirm usinf floid's loop detection"<<endl;
    }
    cout<<loop_detect_byvalue(head);
    return 0;
}
