#include<iostream>
#include <stack>
using namespace std;
bool check_parenthesis(string parenthesis)
{
    stack <char>s;
    for(int i=0;i<parenthesis.length();i++)
    {
        char ch=parenthesis[i];

        // for open bracket push stack
        if(ch=='(' || ch=='{' || ch=='[')
        {
            s.push(ch);
        }

        //for closing bracket 
        // if closing bracket matched with open bracket then pop it otherwise return false
        else
        {
            if(!s.empty())
            {
                char top=s.top();
                if((ch==')' && top=='(')||(ch=='}' && top=='{') || ch==']' && top=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }

    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char str[]="{[)]}";
    stack<int>s;
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    cout<<s.top()<<endl;
    stack<int>ans_stack;
    while(!s.empty())
    {
        int v=s.top();
        ans_stack.push(v);
        s.pop();
    }
    cout<<ans_stack.top()<<endl;
    s.push(19);
    while(!ans_stack.empty())
    {
        int v=ans_stack.top();
        s.push(v);
        ans_stack.pop();
    }
    
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    // cout<<check_parenthesis(str);

    return 0;
}