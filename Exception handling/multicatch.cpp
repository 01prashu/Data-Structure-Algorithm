#include<iostream>
using namespace std;
void func(int i)
{
    try{
        if(i>0)
        {
            throw i;
        }
        else if(i<0)
        {
            throw "Negative value";
        }
        else
        {
            throw "Zero value";
        }
    }
    catch(int i)
    {
        cout<<"Value is: "<<i<<endl;
    }
    catch(const char *str)
    {
        cout<<"Exception handled for: "<<str<<endl;
    }
    catch(const char *str)
    {
        cout<<"Exception handled for: "<<str<<endl;
    }
}
int main()
{
    func(0);
    func(1);
    func(-2);
 return 0;
}