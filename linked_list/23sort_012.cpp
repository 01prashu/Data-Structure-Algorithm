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

void display(node *head)
{
    node *temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
node *sort_zero_one_two(node *&head)
{
    int zero_coun=0;
    int one_coun=0;
    int two_coun=0;

    node *temp=head;
    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zero_coun++;
        }
        else if(temp->data==1)
        {
            one_coun ++;
        }
        else if(temp ->data == 2)
        {
            two_coun ++ ;
        }
        temp=temp->next;
    }
    temp=head;

    while(temp != NULL)
    {
        if(zero_coun != 0)
        {
            temp->data=0;
            zero_coun --;
        }
        else if(one_coun != 0)
        {
            temp ->data=1;
            one_coun --;
        }
        else if(two_coun != 0)
        {
            temp->data=2;
            two_coun --;
        }
        temp=temp->next;
    }
    return head;

}
int main()
{
    node*head=NULL;
    node *tail = NULL;
    insert_last(head , tail , 1);
    insert_last(head , tail ,0);
    insert_last(head ,tail ,2);
    insert_last(head , tail , 0);
    insert_last(head , tail , 0);
    insert_last(head , tail , 2);
    insert_last(head , tail ,1);
    display(head);
    node * t =sort_zero_one_two(head);
    display(t);

    return 0;
}