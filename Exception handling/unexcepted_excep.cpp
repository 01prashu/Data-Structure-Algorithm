#include<iostream>
#include <exception>
using namespace std;
void myexceptation()
{
    cerr<<"Unexcepted handling"<<endl;
}
void fun() throw(int , double)
{
    throw "hello";
}
int main()
{
    set_unexpected(myexceptation);
    try 
    {
        fun();
    }
    catch(int i)
    {
        cout<<"value is: "<<i<<endl;
    }
    catch (double d)
    {
        cout<<"Double value is: "<<d<<endl;
    }
    catch(...)
    {
        cout<<"Handeling something else"<<endl;
    }
 return 0;
}