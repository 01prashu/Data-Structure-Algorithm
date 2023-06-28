#include<iostream>
using namespace std;
#define SIZE 100
int queue[SIZE];
int front=-1 , rare=-1;
void enqueue(int x)
{
    if(rare==SIZE-1)
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }
    else if(front==-1 && rare==-1)
    {
        front=0;
        rare=0;
        queue[front]=x;
    }
    else
    {
        rare++;
        queue[rare]=x;
    }
}
void dequeue()
{
    if(front==-1 && rare==-1)
    {
        cout<<"Queue Underflow"<<endl;
        return;
    }
    else if(front==rare)
    {
        // int value=queue[front];
        front=-1;
        rare=-1;
    }
    else
    {
        // int value=queue[front];
        front++;
    }
}
void display()
{
    if(front==-1 && rare==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        for(int i=front;i<rare +1;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    display();
    enqueue(10);
    enqueue(20);
    dequeue();
    enqueue(30);
    enqueue(40);
    display();
    
 return 0;
}