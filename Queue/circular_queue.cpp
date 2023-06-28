#include<iostream>
using namespace std;
#define SIZE 4
int circ_queue[SIZE];
int rare=-1 , front=-1;
void insert(int item)
{
    if(front==(rare +1)%SIZE)
    {
        cout<<"Queue Overflow"<<endl;
    }
    else if(rare==-1 && front==-1)
    {
        rare=front=0;
        circ_queue[rare]=item;
    }
    else
    {
        rare=(rare+1)%SIZE;
        circ_queue[rare]=item;
    }
}
void delet()
{
    if(rare==-1 && front==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    else if(front==rare)
    {
        int value=circ_queue[front];
        rare=front=-1;
    }
    else
    {
        int value=circ_queue[front];
        front=(front+1)%SIZE;
    }
}
void display()
{
    if(front==-1 && rare==-1)
    {
        cout<<"Empty quque"<<endl;
    }
    else 
    {
        int i=front;
        while(i!=rare)
        {
            cout<<circ_queue[i]<<" ";
            i=(i+1)%SIZE;
        }
        cout<<circ_queue[rare]<<endl;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
   display();
   delet();
   delet();
   delet();
   display();
   insert(100);
   display();
 return 0;
}