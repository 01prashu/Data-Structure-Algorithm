#include<iostream>
using namespace std;
void fun() throw(int , double)
{
    throw "hello";
}
int main()
{
    try 
    {
        fun();
    }
    catch(int i)
    {
        cout<<"value is: "<<endl;
    }
    catch(...)
    {
        cout<<"You enter something else than int  and double"<<endl;
    }
    return 0;
}