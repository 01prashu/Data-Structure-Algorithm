#include<iostream>
#include <stack>
using namespace std;
bool check_redundant(string exp)
{
    stack<char>st;
    for(int i=0;i<exp.length();i++)
    {
        char ch=exp[i];
        //if ch is open braces or operator then push into stack
        if( (ch=='(') || (ch=='+')|| (ch=='*') || (ch=='-'))
        {
            st.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool redundant=true;
                while(st.top()!='(')
                {
                    char top=st.top();
                    if((top=='+') || (top=='-') || (top=='*') )
                    {
                        redundant=false;
                    }
                    st.pop();

                }
                if(redundant==true)
                {
                    return true;
                }
                st.pop();
                
            }


        }
    }
    return false;

}
int main()
{
    string str="((a+b)+(c*d))"; //ans must br false
    cout<<check_redundant(str);
    return 0;
}