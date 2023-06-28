#include<iostream>
#include <stack>
using namespace std;
int cost_for_valid_str(string exp)
{
    // stack <char> st;
    // if(exp.length() %2 ==1)
    // {
    //     return -1;
    // }

    // // stored invalid char in stack
    // for(int i=0;i< exp.length();i++)
    // {
    //     char ch=exp[i];
    //     if(ch=='(')
    //     {
    //         st.push(ch);
    //     }
    //     else
    //     {
    //         if(st.top()=='(')
    //         {
    //             st.pop();
    //         }
    //         else
    //         {
    //             st.push(ch);
    //         }
    //     }
    // }
    // int a =0 , b=0;
    // while( !st.empty())
    // {
        
    //     if(st.top()=='(')
    //     {
    //         a++;
    //     }
    //     else
    //     {
    //         b++ ;
    //     }
    //     st.pop();
    // }
    // int ans=((a+1)/2 )+((b+1)/2);

    // return -1;
    return 1;
}
int main()
{
    string str="()))))";
    cout<<cost_for_valid_str(str);
    return 0;
}