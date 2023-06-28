#include<iostream>
using namespace std;
class queue
{
    public:
    int *queue_arr ; 
    int size ;
    int rare , front;
    queue(int s)
    {
        this->size=s;
        this->queue_arr=new int[size];
        this->rare=-1;
        this->front=-1;
    }
    void push(int value)
    {
        //check quque is full or not
        if(rare ==size-1)
        {
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        //if queue is empty then rare and front assigned to 0th index
        else if(front==-1 && rare==-1)
        {
            rare=front=0;
            queue_arr[rare]=value;
        }
        else 
        {
            rare++;
            queue_arr[rare]=value;
        }

    }
    void pop()
    {
        if(front==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return ;
        }
        else if(front==rare)
        {
            front=rare=-1;
        }
        else
        {
            int val=queue_arr[front];
            front++;   
        }
    }
    bool isEmpty()
    {
        if(front==-1 && rare ==-1)
        {
            return true;
        }
        return false;
    }
    int stack_size()
    {
        
    }
    int peek()
    {
        if(rare >size-1)
        {
            return 0;
        }
        else if(rare==-1)
        {
            return -1;
        }
        return queue_arr[rare];
        
    }
};
int main()
{
    queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.pop();
    q.pop();
    
    q.push(10);
    cout<<q.peek()<<endl;
 return 0;
}