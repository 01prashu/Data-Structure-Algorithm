#include<iostream>
#include <stack>
using namespace std;
void  insert_last(stack<int> &s ,int num)
{
    if(s.empty())
    {
        s.push(num);
        return ;
    }
    int value=s.top();
    s.pop();
    insert_last(s , value);
    s.push(value);
}
void reverse_stack(stack<int > &s )
{
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    reverse_stack(s);

    //
    insert_last(s , num);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.top()<<endl;
    reverse_stack(s);
    cout<<s.top()<<endl;   
 return 0;
}