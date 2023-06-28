#include<iostream>
using namespace std;
class Stack
{
    public:
    int size;
    int *stack_arr ;
    int top;
    Stack(int s)
    {
        this->size=s;
        this->top=-1;
        stack_arr=new int [size];
    }
    void push(int d)
    {
        if(top >=size -1)
        {
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        else
        {
            top++;
            stack_arr[top]=d;
           
        }
    }
    void  pop()
    {
       if(top >=0)
       {
          top --;
       }
       else
       {
          cout<<"Stack Underflow"<<endl;
       }
    }
    bool isEmpty()
    {
        if(top ==-1)
        {
            return true;
        }
        return false;

    }
    int peek()
    {
        if(top >=0 )
        {
            return stack_arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
   
    s.pop();
    cout<<s.peek()<<endl;
 return 0;
}