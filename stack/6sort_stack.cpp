#include<iostream>
#include <stack>
using namespace std;
void insert_sorted_order(stack<int > &s ,int num)
{
    if(s.empty() || (s.top() < num))
    {
        s.push(num);
        return ;
    }
    int value=s.top();
    s.pop();
    
    insert_sorted_order(s ,  num);
    s.push(value);
}
void sortstack(stack <int> s)
{
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    sortstack(s) ;
    insert_sorted_order(s , num);
}
int main()
{
    stack<int>s;
    s.push(7);
    s.push(3);
    s.push(8);
    s.push(4);
    cout<<s.top()<<endl;
    sortstack(s);
    cout<<s.top()<<endl;
    return 0;
}