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
    ~ node()
    {
        this->next=NULL;
        if(next != NULL)
        {
            cout<<data<<" is free"<<endl;
        }
        delete next;
    }
};
class stack
{
    public:
    node *top=NULL;
    
    void push(int d)
    {
        node *nn=new node(d);
        if(nn == NULL)
        {
            cout<<"Not Able to Create Node"<<endl;
            return;
        }
        else
        {
            nn->next=top;
            top=nn;
        }
    }
    void pop()
    {
        if(top== NULL)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        else
        {
            node *temp=top;
            
            top=top->next;
            
            return ;
        }
    }
    int peek()
    {
        if(top != NULL)
        {
            return top->data;
        }
        else
        {
            cout<<"stack Is empty There is no peek"<<endl;
            return -1;
        }
        
    }
    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        return false;
    }

};
int main()
{
    
    stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.pop();
    
    // cout<<s.peek()<<endl;
    // cout<<s.isEmpty()<<endl;
 return 0;
}