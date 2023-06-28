#include<iostream>
#include <stack>
using namespace std;
bool solve(string str1 , string str2)
{
    stack<char>st;
    if(str1.length() != str2.length())
    {
        return false;
    }
    for(int i=0;i<str1.length();i++)
    {
        st.push(str1[i]);
    }
    int size1=str1.length();
    int c=0;
    bool flag=false;
    while(c<=size1)
    {
        char d= st.top();
        
        for(int i=0;i<str2.length();i++)
        {
            
            c++;
            if(d == str2[i])
            {
                str2[i]='+';
            }
        }
        st.pop();
    }

    for(int i=0;i<str2.length();i++)
    {
        if(str2[i]== '+')
        {
            flag=true;
        }
    }
    return flag;
}
int main()
{
    string str1 , str2;
    cout<<"Enter strings"<<endl;
    cin>>str1>>str2;
    cout<<solve(str1 , str2)<<endl;
    return 0;
}