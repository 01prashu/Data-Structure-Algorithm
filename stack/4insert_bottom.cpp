#include<iostream>
#include <stack>
using namespace std;
void insert_botttom(stack<int>&s , int x)
{
    // if stack is empty base case
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num=s.top();
    s.pop();
    insert_botttom(s , x);
    s.push(num);
}
int main()
{
    stack<int>s;
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(17);
    insert_botttom(s , 100);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top();
    return 0;
}